// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from exomy_sim_msgs:msg/JointCommandArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "exomy_sim_msgs/msg/detail/joint_command_array__rosidl_typesupport_introspection_c.h"
#include "exomy_sim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "exomy_sim_msgs/msg/detail/joint_command_array__functions.h"
#include "exomy_sim_msgs/msg/detail/joint_command_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_command_array`
#include "exomy_sim_msgs/msg/joint_command.h"
// Member `joint_command_array`
#include "exomy_sim_msgs/msg/detail/joint_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  exomy_sim_msgs__msg__JointCommandArray__init(message_memory);
}

void JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_fini_function(void * message_memory)
{
  exomy_sim_msgs__msg__JointCommandArray__fini(message_memory);
}

size_t JointCommandArray__rosidl_typesupport_introspection_c__size_function__JointCommand__joint_command_array(
  const void * untyped_member)
{
  const exomy_sim_msgs__msg__JointCommand__Sequence * member =
    (const exomy_sim_msgs__msg__JointCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * JointCommandArray__rosidl_typesupport_introspection_c__get_const_function__JointCommand__joint_command_array(
  const void * untyped_member, size_t index)
{
  const exomy_sim_msgs__msg__JointCommand__Sequence * member =
    (const exomy_sim_msgs__msg__JointCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * JointCommandArray__rosidl_typesupport_introspection_c__get_function__JointCommand__joint_command_array(
  void * untyped_member, size_t index)
{
  exomy_sim_msgs__msg__JointCommand__Sequence * member =
    (exomy_sim_msgs__msg__JointCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool JointCommandArray__rosidl_typesupport_introspection_c__resize_function__JointCommand__joint_command_array(
  void * untyped_member, size_t size)
{
  exomy_sim_msgs__msg__JointCommand__Sequence * member =
    (exomy_sim_msgs__msg__JointCommand__Sequence *)(untyped_member);
  exomy_sim_msgs__msg__JointCommand__Sequence__fini(member);
  return exomy_sim_msgs__msg__JointCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exomy_sim_msgs__msg__JointCommandArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_command_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exomy_sim_msgs__msg__JointCommandArray, joint_command_array),  // bytes offset in struct
    NULL,  // default value
    JointCommandArray__rosidl_typesupport_introspection_c__size_function__JointCommand__joint_command_array,  // size() function pointer
    JointCommandArray__rosidl_typesupport_introspection_c__get_const_function__JointCommand__joint_command_array,  // get_const(index) function pointer
    JointCommandArray__rosidl_typesupport_introspection_c__get_function__JointCommand__joint_command_array,  // get(index) function pointer
    JointCommandArray__rosidl_typesupport_introspection_c__resize_function__JointCommand__joint_command_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_members = {
  "exomy_sim_msgs__msg",  // message namespace
  "JointCommandArray",  // message name
  2,  // number of fields
  sizeof(exomy_sim_msgs__msg__JointCommandArray),
  JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_member_array,  // message members
  JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_type_support_handle = {
  0,
  &JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exomy_sim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exomy_sim_msgs, msg, JointCommandArray)() {
  JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exomy_sim_msgs, msg, JointCommand)();
  if (!JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_type_support_handle.typesupport_identifier) {
    JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointCommandArray__rosidl_typesupport_introspection_c__JointCommandArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
