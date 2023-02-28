// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from exomy_sim_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
// Member 'mode'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointCommand in the package exomy_sim_msgs.
typedef struct exomy_sim_msgs__msg__JointCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String mode;
  double value;
} exomy_sim_msgs__msg__JointCommand;

// Struct for a sequence of exomy_sim_msgs__msg__JointCommand.
typedef struct exomy_sim_msgs__msg__JointCommand__Sequence
{
  exomy_sim_msgs__msg__JointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exomy_sim_msgs__msg__JointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
