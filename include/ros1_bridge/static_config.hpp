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

std::vector<TopicParams> TOPICS = {
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "chatter",
        10,
        rclcpp::SystemDefaultsQoS()
    }
};