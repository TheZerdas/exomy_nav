// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from exomy_sim_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice
#include "exomy_sim_msgs/msg/detail/joint_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
exomy_sim_msgs__msg__JointCommand__init(exomy_sim_msgs__msg__JointCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    exomy_sim_msgs__msg__JointCommand__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    exomy_sim_msgs__msg__JointCommand__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    exomy_sim_msgs__msg__JointCommand__fini(msg);
    return false;
  }
  // value
  return true;
}

void
exomy_sim_msgs__msg__JointCommand__fini(exomy_sim_msgs__msg__JointCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // value
}

bool
exomy_sim_msgs__msg__JointCommand__are_equal(const exomy_sim_msgs__msg__JointCommand * lhs, const exomy_sim_msgs__msg__JointCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
exomy_sim_msgs__msg__JointCommand__copy(
  const exomy_sim_msgs__msg__JointCommand * input,
  exomy_sim_msgs__msg__JointCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

exomy_sim_msgs__msg__JointCommand *
exomy_sim_msgs__msg__JointCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_sim_msgs__msg__JointCommand * msg = (exomy_sim_msgs__msg__JointCommand *)allocator.allocate(sizeof(exomy_sim_msgs__msg__JointCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(exomy_sim_msgs__msg__JointCommand));
  bool success = exomy_sim_msgs__msg__JointCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
exomy_sim_msgs__msg__JointCommand__destroy(exomy_sim_msgs__msg__JointCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    exomy_sim_msgs__msg__JointCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
exomy_sim_msgs__msg__JointCommand__Sequence__init(exomy_sim_msgs__msg__JointCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_sim_msgs__msg__JointCommand * data = NULL;

  if (size) {
    data = (exomy_sim_msgs__msg__JointCommand *)allocator.zero_allocate(size, sizeof(exomy_sim_msgs__msg__JointCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = exomy_sim_msgs__msg__JointCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        exomy_sim_msgs__msg__JointCommand__fini(&data[i - 1]);
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
exomy_sim_msgs__msg__JointCommand__Sequence__fini(exomy_sim_msgs__msg__JointCommand__Sequence * array)
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
      exomy_sim_msgs__msg__JointCommand__fini(&array->data[i]);
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

exomy_sim_msgs__msg__JointCommand__Sequence *
exomy_sim_msgs__msg__JointCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  exomy_sim_msgs__msg__JointCommand__Sequence * array = (exomy_sim_msgs__msg__JointCommand__Sequence *)allocator.allocate(sizeof(exomy_sim_msgs__msg__JointCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = exomy_sim_msgs__msg__JointCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
exomy_sim_msgs__msg__JointCommand__Sequence__destroy(exomy_sim_msgs__msg__JointCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    exomy_sim_msgs__msg__JointCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
exomy_sim_msgs__msg__JointCommand__Sequence__are_equal(const exomy_sim_msgs__msg__JointCommand__Sequence * lhs, const exomy_sim_msgs__msg__JointCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!exomy_sim_msgs__msg__JointCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
exomy_sim_msgs__msg__JointCommand__Sequence__copy(
  const exomy_sim_msgs__msg__JointCommand__Sequence * input,
  exomy_sim_msgs__msg__JointCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(exomy_sim_msgs__msg__JointCommand);
    exomy_sim_msgs__msg__JointCommand * data =
      (exomy_sim_msgs__msg__JointCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!exomy_sim_msgs__msg__JointCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          exomy_sim_msgs__msg__JointCommand__fini(&data[i]);
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
    if (!exomy_sim_msgs__msg__JointCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
