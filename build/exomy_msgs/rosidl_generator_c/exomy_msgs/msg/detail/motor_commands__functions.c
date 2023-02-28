// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from exomy_msgs:msg/MotorCommands.idl
// generated code does not contain a copyright notice
#include "exomy_msgs/msg/detail/motor_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_speeds`
// Member `motor_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
exomy_msgs__msg__MotorCommands__init(exomy_msgs__msg__MotorCommands * msg)
{
  if (!msg) {
    return false;
  }
  // motor_speeds
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->motor_speeds, 0)) {
    exomy_msgs__msg__MotorCommands__fini(msg);
    return false;
  }
  // motor_angles
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->motor_angles, 0)) {
    exomy_msgs__msg__MotorCommands__fini(msg);
    return false;
  }
  return true;
}

void
exomy_msgs__msg__MotorCommands__fini(exomy_msgs__msg__MotorCommands * msg)
{
  if (!msg) {
    return;
  }
  // motor_speeds
  rosidl_runtime_c__int64__Sequence__fini(&msg->motor_speeds);
  // motor_angles
  rosidl_runtime_c__int64__Sequence__fini(&msg->motor_angles);
}

bool
exomy_msgs__msg__MotorCommands__are_equal(const exomy_msgs__msg__MotorCommands * lhs, const exomy_msgs__msg__MotorCommands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_speeds
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->motor_speeds), &(rhs->motor_speeds)))
  {
    return false;
  }
  // motor_angles
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->motor_angles), &(rhs->motor_angles)))
  {
    return false;
  }
  return true;
}

bool
exomy_msgs__msg__MotorCommands__copy(
  const exomy_msgs__msg__MotorCommands * input,
  exomy_msgs__msg__MotorCommands * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_speeds
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->motor_speeds), &(output->motor_speeds)))
  {
    return false;
  }
  // motor_angles
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->motor_angles), &(output->motor_angles)))
  {
    return false;
  }
  return true;
}

exomy_msgs__msg__MotorCommands *
exomy_msgs__msg__MotorCommands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__MotorCommands * msg = (exomy_msgs__msg__MotorCommands *)allocator.allocate(sizeof(exomy_msgs__msg__MotorCommands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exomy_msgs__msg__MotorCommands));
  bool success = exomy_msgs__msg__MotorCommands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exomy_msgs__msg__MotorCommands__destroy(exomy_msgs__msg__MotorCommands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exomy_msgs__msg__MotorCommands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exomy_msgs__msg__MotorCommands__Sequence__init(exomy_msgs__msg__MotorCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__MotorCommands * data = NULL;

  if (size) {
    data = (exomy_msgs__msg__MotorCommands *)allocator.zero_allocate(size, sizeof(exomy_msgs__msg__MotorCommands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exomy_msgs__msg__MotorCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exomy_msgs__msg__MotorCommands__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
exomy_msgs__msg__MotorCommands__Sequence__fini(exomy_msgs__msg__MotorCommands__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      exomy_msgs__msg__MotorCommands__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

exomy_msgs__msg__MotorCommands__Sequence *
exomy_msgs__msg__MotorCommands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__MotorCommands__Sequence * array = (exomy_msgs__msg__MotorCommands__Sequence *)allocator.allocate(sizeof(exomy_msgs__msg__MotorCommands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exomy_msgs__msg__MotorCommands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exomy_msgs__msg__MotorCommands__Sequence__destroy(exomy_msgs__msg__MotorCommands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exomy_msgs__msg__MotorCommands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exomy_msgs__msg__MotorCommands__Sequence__are_equal(const exomy_msgs__msg__MotorCommands__Sequence * lhs, const exomy_msgs__msg__MotorCommands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exomy_msgs__msg__MotorCommands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exomy_msgs__msg__MotorCommands__Sequence__copy(
  const exomy_msgs__msg__MotorCommands__Sequence * input,
  exomy_msgs__msg__MotorCommands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exomy_msgs__msg__MotorCommands);
    exomy_msgs__msg__MotorCommands * data =
      (exomy_msgs__msg__MotorCommands *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exomy_msgs__msg__MotorCommands__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          exomy_msgs__msg__MotorCommands__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!exomy_msgs__msg__MotorCommands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
