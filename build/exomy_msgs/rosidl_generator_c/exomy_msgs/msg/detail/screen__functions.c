// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from exomy_msgs:msg/Screen.idl
// generated code does not contain a copyright notice
#include "exomy_msgs/msg/detail/screen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
exomy_msgs__msg__Screen__init(exomy_msgs__msg__Screen * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    exomy_msgs__msg__Screen__fini(msg);
    return false;
  }
  return true;
}

void
exomy_msgs__msg__Screen__fini(exomy_msgs__msg__Screen * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
exomy_msgs__msg__Screen__are_equal(const exomy_msgs__msg__Screen * lhs, const exomy_msgs__msg__Screen * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
exomy_msgs__msg__Screen__copy(
  const exomy_msgs__msg__Screen * input,
  exomy_msgs__msg__Screen * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

exomy_msgs__msg__Screen *
exomy_msgs__msg__Screen__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__Screen * msg = (exomy_msgs__msg__Screen *)allocator.allocate(sizeof(exomy_msgs__msg__Screen), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exomy_msgs__msg__Screen));
  bool success = exomy_msgs__msg__Screen__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exomy_msgs__msg__Screen__destroy(exomy_msgs__msg__Screen * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exomy_msgs__msg__Screen__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exomy_msgs__msg__Screen__Sequence__init(exomy_msgs__msg__Screen__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__Screen * data = NULL;

  if (size) {
    data = (exomy_msgs__msg__Screen *)allocator.zero_allocate(size, sizeof(exomy_msgs__msg__Screen), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exomy_msgs__msg__Screen__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exomy_msgs__msg__Screen__fini(&data[i - 1]);
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
exomy_msgs__msg__Screen__Sequence__fini(exomy_msgs__msg__Screen__Sequence * array)
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
      exomy_msgs__msg__Screen__fini(&array->data[i]);
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

exomy_msgs__msg__Screen__Sequence *
exomy_msgs__msg__Screen__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__Screen__Sequence * array = (exomy_msgs__msg__Screen__Sequence *)allocator.allocate(sizeof(exomy_msgs__msg__Screen__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exomy_msgs__msg__Screen__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exomy_msgs__msg__Screen__Sequence__destroy(exomy_msgs__msg__Screen__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exomy_msgs__msg__Screen__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exomy_msgs__msg__Screen__Sequence__are_equal(const exomy_msgs__msg__Screen__Sequence * lhs, const exomy_msgs__msg__Screen__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exomy_msgs__msg__Screen__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exomy_msgs__msg__Screen__Sequence__copy(
  const exomy_msgs__msg__Screen__Sequence * input,
  exomy_msgs__msg__Screen__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exomy_msgs__msg__Screen);
    exomy_msgs__msg__Screen * data =
      (exomy_msgs__msg__Screen *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exomy_msgs__msg__Screen__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          exomy_msgs__msg__Screen__fini(&data[i]);
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
    if (!exomy_msgs__msg__Screen__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
