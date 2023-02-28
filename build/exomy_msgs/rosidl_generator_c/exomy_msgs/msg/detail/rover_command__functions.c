// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice
#include "exomy_msgs/msg/detail/rover_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
exomy_msgs__msg__RoverCommand__init(exomy_msgs__msg__RoverCommand * msg)
{
  if (!msg) {
    return false;
  }
  // connected
  // motors_enabled
  // locomotion_mode
  // vel
  // steering
  return true;
}

void
exomy_msgs__msg__RoverCommand__fini(exomy_msgs__msg__RoverCommand * msg)
{
  if (!msg) {
    return;
  }
  // connected
  // motors_enabled
  // locomotion_mode
  // vel
  // steering
}

bool
exomy_msgs__msg__RoverCommand__are_equal(const exomy_msgs__msg__RoverCommand * lhs, const exomy_msgs__msg__RoverCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  // motors_enabled
  if (lhs->motors_enabled != rhs->motors_enabled) {
    return false;
  }
  // locomotion_mode
  if (lhs->locomotion_mode != rhs->locomotion_mode) {
    return false;
  }
  // vel
  if (lhs->vel != rhs->vel) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  return true;
}

bool
exomy_msgs__msg__RoverCommand__copy(
  const exomy_msgs__msg__RoverCommand * input,
  exomy_msgs__msg__RoverCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // connected
  output->connected = input->connected;
  // motors_enabled
  output->motors_enabled = input->motors_enabled;
  // locomotion_mode
  output->locomotion_mode = input->locomotion_mode;
  // vel
  output->vel = input->vel;
  // steering
  output->steering = input->steering;
  return true;
}

exomy_msgs__msg__RoverCommand *
exomy_msgs__msg__RoverCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__RoverCommand * msg = (exomy_msgs__msg__RoverCommand *)allocator.allocate(sizeof(exomy_msgs__msg__RoverCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exomy_msgs__msg__RoverCommand));
  bool success = exomy_msgs__msg__RoverCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exomy_msgs__msg__RoverCommand__destroy(exomy_msgs__msg__RoverCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exomy_msgs__msg__RoverCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exomy_msgs__msg__RoverCommand__Sequence__init(exomy_msgs__msg__RoverCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__RoverCommand * data = NULL;

  if (size) {
    data = (exomy_msgs__msg__RoverCommand *)allocator.zero_allocate(size, sizeof(exomy_msgs__msg__RoverCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exomy_msgs__msg__RoverCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exomy_msgs__msg__RoverCommand__fini(&data[i - 1]);
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
exomy_msgs__msg__RoverCommand__Sequence__fini(exomy_msgs__msg__RoverCommand__Sequence * array)
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
      exomy_msgs__msg__RoverCommand__fini(&array->data[i]);
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

exomy_msgs__msg__RoverCommand__Sequence *
exomy_msgs__msg__RoverCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_msgs__msg__RoverCommand__Sequence * array = (exomy_msgs__msg__RoverCommand__Sequence *)allocator.allocate(sizeof(exomy_msgs__msg__RoverCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exomy_msgs__msg__RoverCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exomy_msgs__msg__RoverCommand__Sequence__destroy(exomy_msgs__msg__RoverCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exomy_msgs__msg__RoverCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exomy_msgs__msg__RoverCommand__Sequence__are_equal(const exomy_msgs__msg__RoverCommand__Sequence * lhs, const exomy_msgs__msg__RoverCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exomy_msgs__msg__RoverCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exomy_msgs__msg__RoverCommand__Sequence__copy(
  const exomy_msgs__msg__RoverCommand__Sequence * input,
  exomy_msgs__msg__RoverCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exomy_msgs__msg__RoverCommand);
    exomy_msgs__msg__RoverCommand * data =
      (exomy_msgs__msg__RoverCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exomy_msgs__msg__RoverCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          exomy_msgs__msg__RoverCommand__fini(&data[i]);
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
    if (!exomy_msgs__msg__RoverCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
