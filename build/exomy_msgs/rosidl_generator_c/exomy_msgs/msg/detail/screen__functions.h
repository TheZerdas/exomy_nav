// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice

#ifndef EXOMY_MSGS__MSG__DETAIL__SCREEN__FUNCTIONS_H_
#define EXOMY_MSGS__MSG__DETAIL__SCREEN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "exomy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "exomy_msgs/msg/detail/screen__struct.h"

/// Initialize msg/Screen message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * exomy_msgs__msg__Screen
 * )) before or use
 * exomy_msgs__msg__Screen__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__init(exomy_msgs__msg__Screen * msg);

/// Finalize msg/Screen message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
void
exomy_msgs__msg__Screen__fini(exomy_msgs__msg__Screen * msg);

/// Create msg/Screen message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * exomy_msgs__msg__Screen__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
exomy_msgs__msg__Screen *
exomy_msgs__msg__Screen__create();

/// Destroy msg/Screen message.
/**
 * It calls
 * exomy_msgs__msg__Screen__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
void
exomy_msgs__msg__Screen__destroy(exomy_msgs__msg__Screen * msg);

/// Check for msg/Screen message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__are_equal(const exomy_msgs__msg__Screen * lhs, const exomy_msgs__msg__Screen * rhs);

/// Copy a msg/Screen message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__copy(
  const exomy_msgs__msg__Screen * input,
  exomy_msgs__msg__Screen * output);

/// Initialize array of msg/Screen messages.
/**
 * It allocates the memory for the number of elements and calls
 * exomy_msgs__msg__Screen__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__Sequence__init(exomy_msgs__msg__Screen__Sequence * array, size_t size);

/// Finalize array of msg/Screen messages.
/**
 * It calls
 * exomy_msgs__msg__Screen__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
void
exomy_msgs__msg__Screen__Sequence__fini(exomy_msgs__msg__Screen__Sequence * array);

/// Create array of msg/Screen messages.
/**
 * It allocates the memory for the array and calls
 * exomy_msgs__msg__Screen__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
exomy_msgs__msg__Screen__Sequence *
exomy_msgs__msg__Screen__Sequence__create(size_t size);

/// Destroy array of msg/Screen messages.
/**
 * It calls
 * exomy_msgs__msg__Screen__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
void
exomy_msgs__msg__Screen__Sequence__destroy(exomy_msgs__msg__Screen__Sequence * array);

/// Check for msg/Screen message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__Sequence__are_equal(const exomy_msgs__msg__Screen__Sequence * lhs, const exomy_msgs__msg__Screen__Sequence * rhs);

/// Copy an array of msg/Screen messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_exomy_msgs
bool
exomy_msgs__msg__Screen__Sequence__copy(
  const exomy_msgs__msg__Screen__Sequence * input,
  exomy_msgs__msg__Screen__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXOMY_MSGS__MSG__DETAIL__SCREEN__FUNCTIONS_H_
