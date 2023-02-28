// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_H_
#define EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_H_

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
// Member 'joint_command_array'
#include "exomy_sim_msgs/msg/detail/joint_command__struct.h"

// Struct defined in msg/JointCommandArray in the package exomy_sim_msgs.
typedef struct exomy_sim_msgs__msg__JointCommandArray
{
  std_msgs__msg__Header header;
  exomy_sim_msgs__msg__JointCommand__Sequence joint_command_array;
} exomy_sim_msgs__msg__JointCommandArray;

// Struct for a sequence of exomy_sim_msgs__msg__JointCommandArray.
typedef struct exomy_sim_msgs__msg__JointCommandArray__Sequence
{
  exomy_sim_msgs__msg__JointCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exomy_sim_msgs__msg__JointCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_SIM_MSGS__MSG__DETAIL__JOINT_COMMAND_ARRAY__STRUCT_H_
