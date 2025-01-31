// Auto-generated bridge configuration
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

const std::vector<TopicParams> TOPICS = {
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "service_manager/design_mode_status",
        1,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/SessionInfo",
        "gmr_gui_msgs/msg/SessionInfo",
        "/guiPlugin/session_info",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/coordinator/gui_cmd",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/follower_1/coordinator/gui_cmd",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/SeverityMsg",
        "gmr_gui_msgs/msg/SeverityMsg",
        "/general/show_message_request",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/remote_system/updt_event",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/SeverityMsg",
        "gmr_gui_msgs/msg/SeverityMsg",
        "/follower_1/general/show_message_request",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/coordinator/fast_gui_cmd",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/follower_1/coordinator/fast_gui_cmd",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/MvExt",
        "gmr_gui_msgs/msg/MvExt",
        "/coordinator/move_ext_cmd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/MvExt",
        "gmr_gui_msgs/msg/MvExt",
        "/follower_1/coordinator/move_ext_cmd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/coordinator/purge_compound",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/coordinator/overpressure_routine",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/coordinator/change_polish_pad",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/gui_plugin/pause_cmd",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/follower_1/right_plugin/gui_fdbk",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/GuiCmd",
        "gmr_gui_msgs/msg/GuiCmd",
        "/right_plugin/gui_fdbk",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/right_plugin/switch_profile_mode",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/change_sp_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/coordinator/apply_cpd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/ui_manager/robot_led_fault",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/ui_manager/robot_led_fault",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/guiPlugin/tool_change_recover",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Int32",
        "std_msgs/msg/Int32",
        "/guiPlugin/manual_tool_change",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/left_plugin/enable_change_sandpaper",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileSlim",
        "profile_msgs/msg/ProfileSlim",
        "/coordinator/gui_add_profile_info",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileSlim",
        "profile_msgs/msg/ProfileSlim",
        "/coordinator/gui_edit_profile_info",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileSlim",
        "profile_msgs/msg/ProfileSlim",
        "/coordinator/gui_copy_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/gui_delete_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/left_plugin/customer_enable_left_panel",
        1,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/gui_edit_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/gui_activate_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/mv_proc_sec_frwd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/mv_proc_sec_bkwd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/copy_proc_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/delete_proc_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileProcessSection",
        "profile_msgs/msg/ProfileProcessSection",
        "/coordinator/edit_proc_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/SectionType",
        "profile_msgs/msg/SectionType",
        "/coordinator/add_proc_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/SectionType",
        "profile_msgs/msg/SectionType",
        "/coordinator/add_non_proc_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/add_tool_change_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileScanSection",
        "profile_msgs/msg/ProfileScanSection",
        "/coordinator/edit_scan_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/copy_scan_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/String",
        "std_msgs/msg/String",
        "/coordinator/delete_scan_sec_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/mv_scan_sec_frwd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/mv_scan_sec_bkwd_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_msgs/Float64Array",
        "gmr_msgs/msg/Float64Array",
        "/coordinator/update_bbox_param_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_msgs/Float64Array",
        "gmr_msgs/msg/Float64Array",
        "/coordinator/confirm_bbox_param_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/RobotPose",
        "profile_msgs/msg/RobotPose",
        "/coordinator/update_seed_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_msgs/UInt32Array",
        "gmr_msgs/msg/UInt32Array",
        "/coordinator/update_tool_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Int32",
        "std_msgs/msg/Int32",
        "/coordinator/update_paper_count_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "gmr_gui_msgs/PlanRequest",
        "gmr_gui_msgs/msg/PlanRequest",
        "/coordinator/plan_request_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileSlim",
        "profile_msgs/msg/ProfileSlim",
        "/coordinator/gui_finish_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfilePassArray",
        "profile_msgs/msg/ProfilePassArray",
        "/coordinator/confirm_add_proc_sec",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfilePassArray",
        "profile_msgs/msg/ProfilePassArray",
        "/coordinator/confirm_edit_proc_sec",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfilePassArray",
        "profile_msgs/msg/ProfilePassArray",
        "/coordinator/pass_list_changed_from_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/load_simulation_with_index",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/coordinator/changed_simulation_frame",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/coordinator/compute_registration",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/guiPlugin/smart_retrieve",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "geometry_msgs/Pose",
        "geometry_msgs/msg/Pose",
        "/visualization/load_tcp",
        1,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/hardware_monitor/robot_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/guiplugin/robot_operator_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/hardware_monitor/camera_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/hardware_monitor/end_effector_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/hardware_monitor/pressure_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "turckio_msgs/CompoundPotStatusArray",
        "turckio_msgs/msg/CompoundPotStatusArray",
        "/compound_spray_hdlr/compound_pot_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "turckio_msgs/CompoundPotStatusArray",
        "turckio_msgs/msg/CompoundPotStatusArray",
        "/motion_intf/joint_state",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "sensor_msgs/JointState",
        "sensor_msgs/msg/JointState",
        "/motion_intf/ext_state",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/gui_plugin/enable_customer_panel",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "srv_manager_msgs/PauseOut",
        "srv_manager_msgs/msg/PauseOut",
        "/gui_plugin/update_pause_btn",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/gui_plugin/overpressure_routine_result",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/gui_plugin/in_overpressure_routine",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "turckio_msgs/DoorStatus",
        "turckio_msgs/msg/DoorStatus",
        "/safety_hdlr/door_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/left_plugin/enable_work_mode",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/left_plugin/enable_design_mode",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Empty",
        "std_msgs/msg/Empty",
        "/coordinator/ext_motion_feedback",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/left_plugin/enable_motion_button",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "turckio_msgs/CompoundPotStatusArray",
        "turckio_msgs/msg/CompoundPotStatusArray",
        "/follower_1/motion_intf/joint_state",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "sensor_msgs/JointState",
        "sensor_msgs/msg/JointState",
        "/follower_1/motion_intf/ext_state",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/follower_1/hardware_monitor/robot_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/guiplugin/robot_operator_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/hardware_monitor/camera_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt8",
        "std_msgs/msg/UInt8",
        "/follower_1/hardware_monitor/end_effector_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/hardware_monitor/pressure_status",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/gui_plugin/enable_customer_panel",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/follower_1/top_plugin/enable_reset_btn",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/Profile",
        "profile_msgs/msg/Profile",
        "/right_plugin/loaded_profile",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/SectionType",
        "profile_msgs/msg/SectionType",
        "/right_plugin/loaded_sanding_section_4_add",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileProcessSection",
        "profile_msgs/msg/ProfileProcessSection",
        "/right_plugin/loaded_sanding_section_4_edit",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileScanSection",
        "profile_msgs/msg/ProfileScanSection",
        "/right_plugin/add_scan_section_2_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/ProfileProcessSection",
        "profile_msgs/msg/ProfileProcessSection",
        "/right_plugin/add_proc_section_2_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/UInt16",
        "std_msgs/msg/UInt16",
        "/right_plugin/current_simulation_progress",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/right_plugin/enable_motion_button",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/MacroProfile",
        "profile_msgs/msg/MacroProfile",
        "/right_plugin/loaded_macro_profile_2_gui",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/MacroProfile",
        "profile_msgs/msg/MacroProfile",
        "/gui_plugin/job_done",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "profile_msgs/MacroProfile",
        "profile_msgs/msg/MacroProfile",
        "/gui_plugin/update_smart_retrieve",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "std_msgs/Bool",
        "std_msgs/msg/Bool",
        "/top_plugin/enable_reset_btn",
        10,
        rclcpp::SystemDefaultsQoS()
    },
    {
        "geometry_msgs/Pose",
        "geometry_msgs/msg/Pose",
        "/visualization/current_tcp_pose",
        10,
        rclcpp::SystemDefaultsQoS()
    }
};

const std::vector<ServiceParams> SERVICES = {
    {
        "/coordinator/load_multi_profile",
        "gmr_gui_msgs/LoadMultiProfile",
        ROS2_TO_ROS1
    },
    {
        "/follower_1/coordinator/load_multi_profile",
        "gmr_gui_msgs/LoadMultiProfile",
        ROS2_TO_ROS1
    },
    {
        "/coordinator/refill_compound",
        "std_srvs/SetBool",
        ROS2_TO_ROS1
    },
    {
        "/coordinator/set_door_unlock",
        "std_srvs/SetBool",
        ROS2_TO_ROS1
    },
    {
        "/coordinator/gui_query_robot_pose",
        "gmr_motion_msgs/RobotPoseQuery",
        ROS2_TO_ROS1
    },
    {
        "/ui_manager/start_smart_retrieve",
        "gmr_gui_msgs/SmartRetrieveState",
        ROS2_TO_ROS1
    },
    // {
    //     "/ui_manager/readiness_check",
    //     "srv_manager_msgs/SystemCheck",
    //     ROS1_TO_ROS2
    // },
    // {
    //     "/follower_1/ui_manager/readiness_check",
    //     "srv_manager_msgs/SystemCheck",
    //     ROS1_TO_ROS2
    // },
    {
        "/rightPlugin/popup_safeguard_recover_panel",
        "std_srvs/srv/SetBool",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/popup_chng_sp_intrp_panel",
        "gmr_msgs/srv/SetString",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/popup_reload_panel",
        "std_srvs/srv/Trigger",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/overpressure_warning",
        "std_srvs/srv/Trigger",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/pad_change_panel",
        "gmr_msgs/srv/ToggleUInt8",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/popup_manual_tool_change_panel",
        "gmr_msgs/srv/ToggleUInt8",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/popup_checkpoint_decision_panel",
        "gmr_gui_msgs/srv/GetUserCheckPointDecision",
        ROS1_TO_ROS2
    },
    {
        "/gui_plugin/afd_bottom_out_warning",
        "std_srvs/srv/Trigger",
        ROS1_TO_ROS2
    },
    {
        "/workspace_manager/get_chng_sp_user_opt",
        "multi_robot_msgs/srv/GetUsrOpt",
        ROS1_TO_ROS2
    },
    {
        "/right_plugin/update_profile_list",
        "gmr_gui_msgs/srv/UpdtProfList",
        ROS1_TO_ROS2
    },
    {
        "/right_plugin/reset_tool_view",
        "std_srvs/srv/Trigger",
        ROS1_TO_ROS2
    },
    {
        "/right_plugin/set_tool_view",
        "gmr_msgs/srv/SetString",
        ROS1_TO_ROS2
    },
    {
        "/follower_1/right_plugin/reset_tool_view",
        "std_srvs/srv/Trigger",
        ROS1_TO_ROS2
    },
    {
        "/follower_1/right_plugin/set_tool_view",
        "gmr_msgs/srv/SetString",
        ROS1_TO_ROS2
    }
};
