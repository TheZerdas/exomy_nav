// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice
#include "exomy_msgs/msg/detail/rover_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "exomy_msgs/msg/detail/rover_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace exomy_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_msgs
cdr_serialize(
  const exomy_msgs::msg::RoverCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connected
  cdr << (ros_message.connected ? true : false);
  // Member: motors_enabled
  cdr << (ros_message.motors_enabled ? true : false);
  // Member: locomotion_mode
  cdr << ros_message.locomotion_mode;
  // Member: vel
  cdr << ros_message.vel;
  // Member: steering
  cdr << ros_message.steering;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  exomy_msgs::msg::RoverCommand & ros_message)
{
  // Member: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connected = tmp ? true : false;
  }

  // Member: motors_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motors_enabled = tmp ? true : false;
  }

  // Member: locomotion_mode
  cdr >> ros_message.locomotion_mode;

  // Member: vel
  cdr >> ros_message.vel;

  // Member: steering
  cdr >> ros_message.steering;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_msgs
get_serialized_size(
  const exomy_msgs::msg::RoverCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connected
  {
    size_t item_size = sizeof(ros_message.connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motors_enabled
  {
    size_t item_size = sizeof(ros_message.motors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: locomotion_mode
  {
    size_t item_size = sizeof(ros_message.locomotion_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel
  {
    size_t item_size = sizeof(ros_message.vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_msgs
max_serialized_size_RoverCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motors_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: locomotion_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RoverCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const exomy_msgs::msg::RoverCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoverCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<exomy_msgs::msg::RoverCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoverCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const exomy_msgs::msg::RoverCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoverCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RoverCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _RoverCommand__callbacks = {
  "exomy_msgs::msg",
  "RoverCommand",
  _RoverCommand__cdr_serialize,
  _RoverCommand__cdr_deserialize,
  _RoverCommand__get_serialized_size,
  _RoverCommand__max_serialized_size
};

static rosidl_message_type_support_t _RoverCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoverCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace exomy_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_exomy_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<exomy_msgs::msg::RoverCommand>()
{
  return &exomy_msgs::msg::typesupport_fastrtps_cpp::_RoverCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, exomy_msgs, msg, RoverCommand)() {
  return &exomy_msgs::msg::typesupport_fastrtps_cpp::_RoverCommand__handle;
}

#ifdef __cplusplus
}
#endif
