#pragma once

#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>

struct TopicParams {
    std::string ros1_type_name;
    std::string ros2_type_name;
    std::string topic_name;
    rclcpp::QoS qos_params;
};

const std::vector<TopicParams> TOPICS = {
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "chatter",
        rclcpp::QoS(10)
    }
};