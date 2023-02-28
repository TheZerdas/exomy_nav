// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__SCREEN__BUILDER_HPP_
#define EXOMY_MSGS__MSG__DETAIL__SCREEN__BUILDER_HPP_

#include "exomy_msgs/msg/detail/screen__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exomy_msgs
{

namespace msg
{

namespace builder
{

class Init_Screen_state
{
public:
  Init_Screen_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::exomy_msgs::msg::Screen state(::exomy_msgs::msg::Screen::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exomy_msgs::msg::Screen msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exomy_msgs::msg::Screen>()
{
  return exomy_msgs::msg::builder::Init_Screen_state();
}

}  // namespace exomy_msgs

#endif  // EXOMY_MSGS__MSG__DETAIL__SCREEN__BUILDER_HPP_
