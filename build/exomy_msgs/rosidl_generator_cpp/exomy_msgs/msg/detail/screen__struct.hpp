// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_HPP_
#define EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__exomy_msgs__msg__Screen __attribute__((deprecated))
#else
# define DEPRECATED__exomy_msgs__msg__Screen __declspec(deprecated)
#endif

namespace exomy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Screen_
{
  using Type = Screen_<ContainerAllocator>;

  explicit Screen_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit Screen_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    exomy_msgs::msg::Screen_<ContainerAllocator> *;
  using ConstRawPtr =
    const exomy_msgs::msg::Screen_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<exomy_msgs::msg::Screen_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<exomy_msgs::msg::Screen_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      exomy_msgs::msg::Screen_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<exomy_msgs::msg::Screen_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      exomy_msgs::msg::Screen_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<exomy_msgs::msg::Screen_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<exomy_msgs::msg::Screen_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<exomy_msgs::msg::Screen_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__exomy_msgs__msg__Screen
    std::shared_ptr<exomy_msgs::msg::Screen_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__exomy_msgs__msg__Screen
    std::shared_ptr<exomy_msgs::msg::Screen_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Screen_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Screen_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Screen_

// alias to use template instance with default allocator
using Screen =
  exomy_msgs::msg::Screen_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace exomy_msgs

#endif  // EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_HPP_
