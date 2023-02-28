// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exomy_sim_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_

#include "exomy_sim_msgs/msg/detail/joint_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exomy_sim_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCommand_value
{
public:
  explicit Init_JointCommand_value(::exomy_sim_msgs::msg::JointCommand & msg)
  : msg_(msg)
  {}
  ::exomy_sim_msgs::msg::JointCommand value(::exomy_sim_msgs::msg::JointCommand::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommand msg_;
};

class Init_JointCommand_mode
{
public:
  explicit Init_JointCommand_mode(::exomy_sim_msgs::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_value mode(::exomy_sim_msgs::msg::JointCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointCommand_value(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommand msg_;
};

class Init_JointCommand_name
{
public:
  explicit Init_JointCommand_name(::exomy_sim_msgs::msg::JointCommand & msg)
  : msg_(msg)
  {}
  Init_JointCommand_mode name(::exomy_sim_msgs::msg::JointCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointCommand_mode(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommand msg_;
};

class Init_JointCommand_header
{
public:
  Init_JointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCommand_name header(::exomy_sim_msgs::msg::JointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCommand_name(msg_);
  }

private:
  ::exomy_sim_msgs::msg::JointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exomy_sim_msgs::msg::JointCommand>()
{
  return exomy_sim_msgs::msg::builder::Init_JointCommand_header();
}

}  // namespace exomy_sim_msgs

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
