// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__BUILDER_HPP_
#define EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__BUILDER_HPP_

#include "exomy_msgs/msg/detail/rover_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exomy_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverCommand_steering
{
public:
  explicit Init_RoverCommand_steering(::exomy_msgs::msg::RoverCommand & msg)
  : msg_(msg)
  {}
  ::exomy_msgs::msg::RoverCommand steering(::exomy_msgs::msg::RoverCommand::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exomy_msgs::msg::RoverCommand msg_;
};

class Init_RoverCommand_vel
{
public:
  explicit Init_RoverCommand_vel(::exomy_msgs::msg::RoverCommand & msg)
  : msg_(msg)
  {}
  Init_RoverCommand_steering vel(::exomy_msgs::msg::RoverCommand::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_RoverCommand_steering(msg_);
  }

private:
  ::exomy_msgs::msg::RoverCommand msg_;
};

class Init_RoverCommand_locomotion_mode
{
public:
  explicit Init_RoverCommand_locomotion_mode(::exomy_msgs::msg::RoverCommand & msg)
  : msg_(msg)
  {}
  Init_RoverCommand_vel locomotion_mode(::exomy_msgs::msg::RoverCommand::_locomotion_mode_type arg)
  {
    msg_.locomotion_mode = std::move(arg);
    return Init_RoverCommand_vel(msg_);
  }

private:
  ::exomy_msgs::msg::RoverCommand msg_;
};

class Init_RoverCommand_motors_enabled
{
public:
  explicit Init_RoverCommand_motors_enabled(::exomy_msgs::msg::RoverCommand & msg)
  : msg_(msg)
  {}
  Init_RoverCommand_locomotion_mode motors_enabled(::exomy_msgs::msg::RoverCommand::_motors_enabled_type arg)
  {
    msg_.motors_enabled = std::move(arg);
    return Init_RoverCommand_locomotion_mode(msg_);
  }

private:
  ::exomy_msgs::msg::RoverCommand msg_;
};

class Init_RoverCommand_connected
{
public:
  Init_RoverCommand_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverCommand_motors_enabled connected(::exomy_msgs::msg::RoverCommand::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_RoverCommand_motors_enabled(msg_);
  }

private:
  ::exomy_msgs::msg::RoverCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exomy_msgs::msg::RoverCommand>()
{
  return exomy_msgs::msg::builder::Init_RoverCommand_connected();
}

}  // namespace exomy_msgs

#endif  // EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__BUILDER_HPP_
