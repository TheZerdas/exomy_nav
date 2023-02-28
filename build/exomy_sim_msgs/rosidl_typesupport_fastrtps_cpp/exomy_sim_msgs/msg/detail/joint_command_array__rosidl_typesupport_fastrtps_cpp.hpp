// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "exomy_sim_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "exomy_sim_msgs/msg/detail/joint_command_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace exomy_sim_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
cdr_serialize(
  const exomy_sim_msgs::msg::JointCommandArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  exomy_sim_msgs::msg::JointCommandArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
get_serialized_size(
  const exomy_sim_msgs::msg::JointCommandArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
max_serialized_size_JointCommandArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace exomy_sim_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, exomy_sim_msgs, msg, JointCommandArray)();

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
