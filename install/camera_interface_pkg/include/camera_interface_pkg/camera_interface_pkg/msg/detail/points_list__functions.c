// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice
#include "camera_interface_pkg/msg/detail/points_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points_list`
#include "camera_interface_pkg/msg/detail/points__functions.h"

bool
camera_interface_pkg__msg__PointsList__init(camera_interface_pkg__msg__PointsList * msg)
{
  if (!msg) {
    return false;
  }
  // points_list
  if (!camera_interface_pkg__msg__Points__Sequence__init(&msg->points_list, 0)) {
    camera_interface_pkg__msg__PointsList__fini(msg);
    return false;
  }
  return true;
}

void
camera_interface_pkg__msg__PointsList__fini(camera_interface_pkg__msg__PointsList * msg)
{
  if (!msg) {
    return;
  }
  // points_list
  camera_interface_pkg__msg__Points__Sequence__fini(&msg->points_list);
}

bool
camera_interface_pkg__msg__PointsList__are_equal(const camera_interface_pkg__msg__PointsList * lhs, const camera_interface_pkg__msg__PointsList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points_list
  if (!camera_interface_pkg__msg__Points__Sequence__are_equal(
      &(lhs->points_list), &(rhs->points_list)))
  {
    return false;
  }
  return true;
}

bool
camera_interface_pkg__msg__PointsList__copy(
  const camera_interface_pkg__msg__PointsList * input,
  camera_interface_pkg__msg__PointsList * output)
{
  if (!input || !output) {
    return false;
  }
  // points_list
  if (!camera_interface_pkg__msg__Points__Sequence__copy(
      &(input->points_list), &(output->points_list)))
  {
    return false;
  }
  return true;
}

camera_interface_pkg__msg__PointsList *
camera_interface_pkg__msg__PointsList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__PointsList * msg = (camera_interface_pkg__msg__PointsList *)allocator.allocate(sizeof(camera_interface_pkg__msg__PointsList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface_pkg__msg__PointsList));
  bool success = camera_interface_pkg__msg__PointsList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface_pkg__msg__PointsList__destroy(camera_interface_pkg__msg__PointsList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface_pkg__msg__PointsList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface_pkg__msg__PointsList__Sequence__init(camera_interface_pkg__msg__PointsList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__PointsList * data = NULL;

  if (size) {
    data = (camera_interface_pkg__msg__PointsList *)allocator.zero_allocate(size, sizeof(camera_interface_pkg__msg__PointsList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface_pkg__msg__PointsList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface_pkg__msg__PointsList__fini(&data[i - 1]);
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
camera_interface_pkg__msg__PointsList__Sequence__fini(camera_interface_pkg__msg__PointsList__Sequence * array)
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
      camera_interface_pkg__msg__PointsList__fini(&array->data[i]);
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

camera_interface_pkg__msg__PointsList__Sequence *
camera_interface_pkg__msg__PointsList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__PointsList__Sequence * array = (camera_interface_pkg__msg__PointsList__Sequence *)allocator.allocate(sizeof(camera_interface_pkg__msg__PointsList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface_pkg__msg__PointsList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface_pkg__msg__PointsList__Sequence__destroy(camera_interface_pkg__msg__PointsList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface_pkg__msg__PointsList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface_pkg__msg__PointsList__Sequence__are_equal(const camera_interface_pkg__msg__PointsList__Sequence * lhs, const camera_interface_pkg__msg__PointsList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface_pkg__msg__PointsList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface_pkg__msg__PointsList__Sequence__copy(
  const camera_interface_pkg__msg__PointsList__Sequence * input,
  camera_interface_pkg__msg__PointsList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface_pkg__msg__PointsList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface_pkg__msg__PointsList * data =
      (camera_interface_pkg__msg__PointsList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface_pkg__msg__PointsList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface_pkg__msg__PointsList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface_pkg__msg__PointsList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
