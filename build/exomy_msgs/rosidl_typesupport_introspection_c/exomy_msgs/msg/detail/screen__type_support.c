// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "exomy_msgs/msg/detail/screen__rosidl_typesupport_introspection_c.h"
#include "exomy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "exomy_msgs/msg/detail/screen__functions.h"
#include "exomy_msgs/msg/detail/screen__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Screen__rosidl_typesupport_introspection_c__Screen_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  exomy_msgs__msg__Screen__init(message_memory);
}

void Screen__rosidl_typesupport_introspection_c__Screen_fini_function(void * message_memory)
{
  exomy_msgs__msg__Screen__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Screen__rosidl_typesupport_introspection_c__Screen_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(exomy_msgs__msg__Screen, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Screen__rosidl_typesupport_introspection_c__Screen_message_members = {
  "exomy_msgs__msg",  // message namespace
  "Screen",  // message name
  1,  // number of fields
  sizeof(exomy_msgs__msg__Screen),
  Screen__rosidl_typesupport_introspection_c__Screen_message_member_array,  // message members
  Screen__rosidl_typesupport_introspection_c__Screen_init_function,  // function to initialize message memory (memory has to be allocated)
  Screen__rosidl_typesupport_introspection_c__Screen_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Screen__rosidl_typesupport_introspection_c__Screen_message_type_support_handle = {
  0,
  &Screen__rosidl_typesupport_introspection_c__Screen_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_exomy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, exomy_msgs, msg, Screen)() {
  if (!Screen__rosidl_typesupport_introspection_c__Screen_message_type_support_handle.typesupport_identifier) {
    Screen__rosidl_typesupport_introspection_c__Screen_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Screen__rosidl_typesupport_introspection_c__Screen_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
