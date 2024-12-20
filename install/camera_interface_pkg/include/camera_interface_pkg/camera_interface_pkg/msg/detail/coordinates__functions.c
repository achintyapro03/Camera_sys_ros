// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface_pkg:msg/Coordinates.idl
// generated code does not contain a copyright notice
#include "camera_interface_pkg/msg/detail/coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
camera_interface_pkg__msg__Coordinates__init(camera_interface_pkg__msg__Coordinates * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // x
  // y
  // z
  return true;
}

void
camera_interface_pkg__msg__Coordinates__fini(camera_interface_pkg__msg__Coordinates * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // x
  // y
  // z
}

bool
camera_interface_pkg__msg__Coordinates__are_equal(const camera_interface_pkg__msg__Coordinates * lhs, const camera_interface_pkg__msg__Coordinates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
camera_interface_pkg__msg__Coordinates__copy(
  const camera_interface_pkg__msg__Coordinates * input,
  camera_interface_pkg__msg__Coordinates * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

camera_interface_pkg__msg__Coordinates *
camera_interface_pkg__msg__Coordinates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__Coordinates * msg = (camera_interface_pkg__msg__Coordinates *)allocator.allocate(sizeof(camera_interface_pkg__msg__Coordinates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface_pkg__msg__Coordinates));
  bool success = camera_interface_pkg__msg__Coordinates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface_pkg__msg__Coordinates__destroy(camera_interface_pkg__msg__Coordinates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface_pkg__msg__Coordinates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface_pkg__msg__Coordinates__Sequence__init(camera_interface_pkg__msg__Coordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__Coordinates * data = NULL;

  if (size) {
    data = (camera_interface_pkg__msg__Coordinates *)allocator.zero_allocate(size, sizeof(camera_interface_pkg__msg__Coordinates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface_pkg__msg__Coordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface_pkg__msg__Coordinates__fini(&data[i - 1]);
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
camera_interface_pkg__msg__Coordinates__Sequence__fini(camera_interface_pkg__msg__Coordinates__Sequence * array)
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
      camera_interface_pkg__msg__Coordinates__fini(&array->data[i]);
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

camera_interface_pkg__msg__Coordinates__Sequence *
camera_interface_pkg__msg__Coordinates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__Coordinates__Sequence * array = (camera_interface_pkg__msg__Coordinates__Sequence *)allocator.allocate(sizeof(camera_interface_pkg__msg__Coordinates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface_pkg__msg__Coordinates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface_pkg__msg__Coordinates__Sequence__destroy(camera_interface_pkg__msg__Coordinates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface_pkg__msg__Coordinates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface_pkg__msg__Coordinates__Sequence__are_equal(const camera_interface_pkg__msg__Coordinates__Sequence * lhs, const camera_interface_pkg__msg__Coordinates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface_pkg__msg__Coordinates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface_pkg__msg__Coordinates__Sequence__copy(
  const camera_interface_pkg__msg__Coordinates__Sequence * input,
  camera_interface_pkg__msg__Coordinates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface_pkg__msg__Coordinates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface_pkg__msg__Coordinates * data =
      (camera_interface_pkg__msg__Coordinates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface_pkg__msg__Coordinates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface_pkg__msg__Coordinates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface_pkg__msg__Coordinates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
