// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_H_
#define EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RoverCommand in the package exomy_msgs.
typedef struct exomy_msgs__msg__RoverCommand
{
  bool connected;
  bool motors_enabled;
  int64_t locomotion_mode;
  int64_t vel;
  int64_t steering;
} exomy_msgs__msg__RoverCommand;

// Struct for a sequence of exomy_msgs__msg__RoverCommand.
typedef struct exomy_msgs__msg__RoverCommand__Sequence
{
  exomy_msgs__msg__RoverCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} exomy_msgs__msg__RoverCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_MSGS__MSG__DETAIL__ROVER_COMMAND__STRUCT_H_
