// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__BUILDER_HPP_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__BUILDER_HPP_

#include "exomy_sim_msgs/msg/detail/joint_command_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exomy_sim_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCommandArray_joint_command_array
{
public:
  explicit Init_JointCommandArray_joint_command_array(::exomy_sim_msgs::msg::JointCommandArray & msg)
  : msg_(msg)
  {}
  ::exomy_sim_msgs::msg::JointCommandArray joint_command_array(::exomy_sim_msgs::msg::JointCommandArray::_joint_command_array_type arg)
  {
    msg_.joint_command_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommandArray msg_;
};

class Init_JointCommandArray_header
{
public:
  Init_JointCommandArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCommandArray_joint_command_array header(::exomy_sim_msgs::msg::JointCommandArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCommandArray_joint_command_array(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exomy_sim_msgs::msg::JointCommandArray>()
{
  return exomy_sim_msgs::msg::builder::Init_JointCommandArray_header();
}

}  // namespace exomy_sim_msgs

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__BUILDER_HPP_
