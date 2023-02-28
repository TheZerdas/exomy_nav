// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice
#include "exomy_msgs/msg/detail/rover_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "exomy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "exomy_msgs/msg/detail/rover_command__struct.h"
#include "exomy_msgs/msg/detail/rover_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RoverCommand__ros_msg_type = exomy_msgs__msg__RoverCommand;

static bool _RoverCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoverCommand__ros_msg_type * ros_message = static_cast<const _RoverCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: motors_enabled
  {
    cdr << (ros_message->motors_enabled ? true : false);
  }

  // Field name: locomotion_mode
  {
    cdr << ros_message->locomotion_mode;
  }

  // Field name: vel
  {
    cdr << ros_message->vel;
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  return true;
}

static bool _RoverCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoverCommand__ros_msg_type * ros_message = static_cast<_RoverCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connected = tmp ? true : false;
  }

  // Field name: motors_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motors_enabled = tmp ? true : false;
  }

  // Field name: locomotion_mode
  {
    cdr >> ros_message->locomotion_mode;
  }

  // Field name: vel
  {
    cdr >> ros_message->vel;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exomy_msgs
size_t get_serialized_size_exomy_msgs__msg__RoverCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoverCommand__ros_msg_type * ros_message = static_cast<const _RoverCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motors_enabled
  {
    size_t item_size = sizeof(ros_message->motors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locomotion_mode
  {
    size_t item_size = sizeof(ros_message->locomotion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel
  {
    size_t item_size = sizeof(ros_message->vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoverCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_exomy_msgs__msg__RoverCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_exomy_msgs
size_t max_serialized_size_exomy_msgs__msg__RoverCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motors_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: locomotion_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RoverCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_exomy_msgs__msg__RoverCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoverCommand = {
  "exomy_msgs::msg",
  "RoverCommand",
  _RoverCommand__cdr_serialize,
  _RoverCommand__cdr_deserialize,
  _RoverCommand__get_serialized_size,
  _RoverCommand__max_serialized_size
};

static rosidl_message_type_support_t _RoverCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoverCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, exomy_msgs, msg, RoverCommand)() {
  return &_RoverCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
