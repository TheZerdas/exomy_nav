// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exomy_msgs:msg/MotorCommands.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__MOTOR_COMMANDS__BUILDER_HPP_
#define EXOMY_MSGS__MSG__DETAIL__MOTOR_COMMANDS__BUILDER_HPP_

#include "exomy_msgs/msg/detail/motor_commands__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exomy_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommands_motor_angles
{
public:
  explicit Init_MotorCommands_motor_angles(::exomy_msgs::msg::MotorCommands & msg)
  : msg_(msg)
  {}
  ::exomy_msgs::msg::MotorCommands motor_angles(::exomy_msgs::msg::MotorCommands::_motor_angles_type arg)
  {
    msg_.motor_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exomy_msgs::msg::MotorCommands msg_;
};

class Init_MotorCommands_motor_speeds
{
public:
  Init_MotorCommands_motor_speeds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommands_motor_angles motor_speeds(::exomy_msgs::msg::MotorCommands::_motor_speeds_type arg)
  {
    msg_.motor_speeds = std::move(arg);
    return Init_MotorCommands_motor_angles(msg_);
  }

private:
  ::exomy_msgs::msg::MotorCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exomy_msgs::msg::MotorCommands>()
{
  return exomy_msgs::msg::builder::Init_MotorCommands_motor_speeds();
}

}  // namespace exomy_msgs

#endif  // EXOMY_MSGS__MSG__DETAIL__MOTOR_COMMANDS__BUILDER_HPP_
