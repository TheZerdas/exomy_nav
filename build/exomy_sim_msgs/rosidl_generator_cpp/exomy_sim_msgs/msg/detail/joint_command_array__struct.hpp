// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_HPP_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'joint_command_array'
#include "exomy_sim_msgs/msg/detail/joint_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__exomy_sim_msgs__msg__JointCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__exomy_sim_msgs__msg__JointCommandArray __declspec(deprecated)
#endif

namespace exomy_sim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCommandArray_
{
  using Type = JointCommandArray_<ContainerAllocator>;

  explicit JointCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit JointCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_command_array_type =
    std::vector<exomy_sim_msgs::msg::JointCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<exomy_sim_msgs::msg::JointCommand_<ContainerAllocator>>::other>;
  _joint_command_array_type joint_command_array;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_command_array(
    const std::vector<exomy_sim_msgs::msg::JointCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<exomy_sim_msgs::msg::JointCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->joint_command_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__exomy_sim_msgs__msg__JointCommandArray
    std::shared_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__exomy_sim_msgs__msg__JointCommandArray
    std::shared_ptr<exomy_sim_msgs::msg::JointCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCommandArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_command_array != other.joint_command_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCommandArray_

// alias to use template instance with default allocator
using JointCommandArray =
  exomy_sim_msgs::msg::JointCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace exomy_sim_msgs

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_HPP_
