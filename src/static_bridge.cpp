// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <string>
#include <list>

// include ROS 1
#ifdef __clang__
# pragma clang diagnostic push
# pragma clang diagnostic ignored "-Wunused-parameter"
#endif
#include "ros/ros.h"
#ifdef __clang__
# pragma clang diagnostic pop
#endif

// include ROS 2
#include "rclcpp/rclcpp.hpp"

#include "ros1_bridge/bridge.hpp"
#include "ros1_bridge/command_parser_utils.hpp"
#include "ros1_bridge/static_config.hpp"

int main(int argc, char * argv[])
{
  // ROS 1 node
  ros::init(argc, argv, "ros_bridge");
  ros::NodeHandle ros1_node;

  // ROS 2 node
  rclcpp::init(argc, argv);
  auto ros2_node = rclcpp::Node::make_shared("ros_bridge");

  std::list<ros1_bridge::BridgeHandles> all_handles;
  std::list<ros1_bridge::ServiceBridge1to2> service_bridges_1_to_2;
  std::list<ros1_bridge::ServiceBridge2to1> service_bridges_2_to_1;
  int service_execution_timeout{120};

  for (const auto& topic_param : TOPICS) {
    all_handles.emplace_back(ros1_bridge::create_bidirectional_bridge(
      ros1_node,
      ros2_node, 
      topic_param.ros1_type_name, 
      topic_param.ros2_type_name,
      topic_param.topic_name,
      topic_param.queue_size,
      topic_param.publisher_qos
    ));
  }

  for (auto const& service_param : SERVICES) {
    const std::string& service_name = service_param.service_name;
    const std::string& type_name = service_param.type_name;
    const size_t index = type_name.find("/");
    if (index == std::string::npos) {
        fprintf(stderr, "The service '%s' has a type '%s' without a slash.\n", service_name.c_str(), type_name.c_str());
        continue;
    }

    std::string ros_version = (service_param.direction == BridgeDirection::ROS1_TO_ROS2) ? "ros2" : "ros1";
    auto factory = ros1_bridge::get_service_factory(ros_version, type_name.substr(0, index), type_name.substr(index + 1));

    if (!factory) {
        fprintf(stderr, "Failed to create bridge for service '%s': no conversion for type '%s'\n",
                service_name.c_str(), type_name.c_str());
        continue;
    }

    try {
        if (service_param.direction == BridgeDirection::ROS1_TO_ROS2) {
            service_bridges_1_to_2.push_back(factory->service_bridge_1_to_2(
                ros1_node, ros2_node, service_name, service_execution_timeout));
            printf("Created 1 to 2 bridge for service %s\n", service_name.c_str());
        } else {
            service_bridges_2_to_1.push_back(factory->service_bridge_2_to_1(
                ros1_node, ros2_node, service_name));
            printf("Created 2 to 1 bridge for service %s\n", service_name.c_str());
        }
    } catch (std::runtime_error& e) {
        fprintf(stderr, "Failed to create bridge for service '%s' with type '%s': %s\n",
                service_name.c_str(), type_name.c_str(), e.what());
    }
  }

  // ROS 1 asynchronous spinner
  ros::AsyncSpinner async_spinner(1);
  async_spinner.start();

  // ROS 2 spinning loop
  rclcpp::executors::SingleThreadedExecutor executor;
  while (ros1_node.ok() && rclcpp::ok()) {
    executor.spin_node_once(ros2_node, std::chrono::milliseconds(1000));
  }

  return 0;
}
