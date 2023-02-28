// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_HPP_
#define EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__exomy_msgs__msg__RoverCommand __attribute__((deprecated))
#else
# define DEPRECATED__exomy_msgs__msg__RoverCommand __declspec(deprecated)
#endif

namespace exomy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverCommand_
{
  using Type = RoverCommand_<ContainerAllocator>;

  explicit RoverCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->motors_enabled = false;
      this->locomotion_mode = 0ll;
      this->vel = 0ll;
      this->steering = 0ll;
    }
  }

  explicit RoverCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->motors_enabled = false;
      this->locomotion_mode = 0ll;
      this->vel = 0ll;
      this->steering = 0ll;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _motors_enabled_type =
    bool;
  _motors_enabled_type motors_enabled;
  using _locomotion_mode_type =
    int64_t;
  _locomotion_mode_type locomotion_mode;
  using _vel_type =
    int64_t;
  _vel_type vel;
  using _steering_type =
    int64_t;
  _steering_type steering;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__motors_enabled(
    const bool & _arg)
  {
    this->motors_enabled = _arg;
    return *this;
  }
  Type & set__locomotion_mode(
    const int64_t & _arg)
  {
    this->locomotion_mode = _arg;
    return *this;
  }
  Type & set__vel(
    const int64_t & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__steering(
    const int64_t & _arg)
  {
    this->steering = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    exomy_msgs::msg::RoverCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const exomy_msgs::msg::RoverCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      exomy_msgs::msg::RoverCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      exomy_msgs::msg::RoverCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__exomy_msgs__msg__RoverCommand
    std::shared_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__exomy_msgs__msg__RoverCommand
    std::shared_ptr<exomy_msgs::msg::RoverCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverCommand_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->motors_enabled != other.motors_enabled) {
      return false;
    }
    if (this->locomotion_mode != other.locomotion_mode) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverCommand_

// alias to use template instance with default allocator
using RoverCommand =
  exomy_msgs::msg::RoverCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace exomy_msgs

#endif  // EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_HPP_
