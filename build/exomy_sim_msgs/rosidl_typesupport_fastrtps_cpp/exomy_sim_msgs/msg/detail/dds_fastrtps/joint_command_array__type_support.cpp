// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice
#include "exomy_sim_msgs/msg/detail/joint_command_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "exomy_sim_msgs/msg/detail/joint_command_array__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace exomy_sim_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const exomy_sim_msgs::msg::JointCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  exomy_sim_msgs::msg::JointCommand &);
size_t get_serialized_size(
  const exomy_sim_msgs::msg::JointCommand &,
  size_t current_alignment);
size_t
max_serialized_size_JointCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace exomy_sim_msgs


namespace exomy_sim_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
cdr_serialize(
  const exomy_sim_msgs::msg::JointCommandArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: joint_command_array
  {
    size_t size = ros_message.joint_command_array.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      exomy_sim_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.joint_command_array[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  exomy_sim_msgs::msg::JointCommandArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: joint_command_array
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.joint_command_array.resize(size);
    for (size_t i = 0; i < size; i++) {
      exomy_sim_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.joint_command_array[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
get_serialized_size(
  const exomy_sim_msgs::msg::JointCommandArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: joint_command_array
  {
    size_t array_size = ros_message.joint_command_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        exomy_sim_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.joint_command_array[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_exomy_sim_msgs
max_serialized_size_JointCommandArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: joint_command_array
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        exomy_sim_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _JointCommandArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const exomy_sim_msgs::msg::JointCommandArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointCommandArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<exomy_sim_msgs::msg::JointCommandArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointCommandArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const exomy_sim_msgs::msg::JointCommandArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointCommandArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_JointCommandArray(full_bounded, 0);
}

static message_type_support_callbacks_t _JointCommandArray__callbacks = {
  "exomy_sim_msgs::msg",
  "JointCommandArray",
  _JointCommandArray__cdr_serialize,
  _JointCommandArray__cdr_deserialize,
  _JointCommandArray__get_serialized_size,
  _JointCommandArray__max_serialized_size
};

static rosidl_message_type_support_t _JointCommandArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointCommandArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace exomy_sim_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_exomy_sim_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<exomy_sim_msgs::msg::JointCommandArray>()
{
  return &exomy_sim_msgs::msg::typesupport_fastrtps_cpp::_JointCommandArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, exomy_sim_msgs, msg, JointCommandArray)() {
  return &exomy_sim_msgs::msg::typesupport_fastrtps_cpp::_JointCommandArray__handle;
}

#ifdef __cplusplus
}
#endif
