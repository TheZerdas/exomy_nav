// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_H_
#define EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Screen in the package exomy_msgs.
typedef struct exomy_msgs__msg__Screen
{
  rosidl_runtime_c__String state;
} exomy_msgs__msg__Screen;

// Struct for a sequence of exomy_msgs__msg__Screen.
typedef struct exomy_msgs__msg__Screen__Sequence
{
  exomy_msgs__msg__Screen * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exomy_msgs__msg__Screen__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_MSGS__MSG__DETAIL__SCREEN__STRUCT_H_
