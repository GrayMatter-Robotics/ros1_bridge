#pragma once

#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>

struct TopicParams {
    std::string ros1_type_name;
    std::string ros2_type_name;
    std::string topic_name;
    size_t queue_size;
    rclcpp::QoS publisher_qos;
};

enum BridgeDirection {
    ROS1_TO_ROS2,
    ROS2_TO_ROS1
};

struct ServiceParams {
    std::string service_name;
    std::string type_name;
    BridgeDirection direction;
};

std::vector<TopicParams> TOPICS = {
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "chatter",
        10,
        rclcpp::SystemDefaultsQoS()
    }
};

std::vector<ServiceParams> SERVICES = {
    {
        "add_two_ints",
        "example_interfaces/srv/AddTwoInts",
        ROS1_TO_ROS2
    }
};