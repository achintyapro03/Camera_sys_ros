// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface_pkg:srv/SetCalibration.idl
// generated code does not contain a copyright notice
#include "camera_interface_pkg/srv/detail/set_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
camera_interface_pkg__srv__SetCalibration_Request__init(camera_interface_pkg__srv__SetCalibration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // calibrated
  return true;
}

void
camera_interface_pkg__srv__SetCalibration_Request__fini(camera_interface_pkg__srv__SetCalibration_Request * msg)
{
  if (!msg) {
    return;
  }
  // calibrated
}

bool
camera_interface_pkg__srv__SetCalibration_Request__are_equal(const camera_interface_pkg__srv__SetCalibration_Request * lhs, const camera_interface_pkg__srv__SetCalibration_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // calibrated
  if (lhs->calibrated != rhs->calibrated) {
    return false;
  }
  return true;
}

bool
camera_interface_pkg__srv__SetCalibration_Request__copy(
  const camera_interface_pkg__srv__SetCalibration_Request * input,
  camera_interface_pkg__srv__SetCalibration_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // calibrated
  output->calibrated = input->calibrated;
  return true;
}

camera_interface_pkg__srv__SetCalibration_Request *
camera_interface_pkg__srv__SetCalibration_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Request * msg = (camera_interface_pkg__srv__SetCalibration_Request *)allocator.allocate(sizeof(camera_interface_pkg__srv__SetCalibration_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface_pkg__srv__SetCalibration_Request));
  bool success = camera_interface_pkg__srv__SetCalibration_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface_pkg__srv__SetCalibration_Request__destroy(camera_interface_pkg__srv__SetCalibration_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface_pkg__srv__SetCalibration_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface_pkg__srv__SetCalibration_Request__Sequence__init(camera_interface_pkg__srv__SetCalibration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Request * data = NULL;

  if (size) {
    data = (camera_interface_pkg__srv__SetCalibration_Request *)allocator.zero_allocate(size, sizeof(camera_interface_pkg__srv__SetCalibration_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface_pkg__srv__SetCalibration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface_pkg__srv__SetCalibration_Request__fini(&data[i - 1]);
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
camera_interface_pkg__srv__SetCalibration_Request__Sequence__fini(camera_interface_pkg__srv__SetCalibration_Request__Sequence * array)
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
      camera_interface_pkg__srv__SetCalibration_Request__fini(&array->data[i]);
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

camera_interface_pkg__srv__SetCalibration_Request__Sequence *
camera_interface_pkg__srv__SetCalibration_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Request__Sequence * array = (camera_interface_pkg__srv__SetCalibration_Request__Sequence *)allocator.allocate(sizeof(camera_interface_pkg__srv__SetCalibration_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface_pkg__srv__SetCalibration_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface_pkg__srv__SetCalibration_Request__Sequence__destroy(camera_interface_pkg__srv__SetCalibration_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface_pkg__srv__SetCalibration_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface_pkg__srv__SetCalibration_Request__Sequence__are_equal(const camera_interface_pkg__srv__SetCalibration_Request__Sequence * lhs, const camera_interface_pkg__srv__SetCalibration_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface_pkg__srv__SetCalibration_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface_pkg__srv__SetCalibration_Request__Sequence__copy(
  const camera_interface_pkg__srv__SetCalibration_Request__Sequence * input,
  camera_interface_pkg__srv__SetCalibration_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface_pkg__srv__SetCalibration_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface_pkg__srv__SetCalibration_Request * data =
      (camera_interface_pkg__srv__SetCalibration_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface_pkg__srv__SetCalibration_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface_pkg__srv__SetCalibration_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface_pkg__srv__SetCalibration_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
camera_interface_pkg__srv__SetCalibration_Response__init(camera_interface_pkg__srv__SetCalibration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
camera_interface_pkg__srv__SetCalibration_Response__fini(camera_interface_pkg__srv__SetCalibration_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
camera_interface_pkg__srv__SetCalibration_Response__are_equal(const camera_interface_pkg__srv__SetCalibration_Response * lhs, const camera_interface_pkg__srv__SetCalibration_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
camera_interface_pkg__srv__SetCalibration_Response__copy(
  const camera_interface_pkg__srv__SetCalibration_Response * input,
  camera_interface_pkg__srv__SetCalibration_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

camera_interface_pkg__srv__SetCalibration_Response *
camera_interface_pkg__srv__SetCalibration_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Response * msg = (camera_interface_pkg__srv__SetCalibration_Response *)allocator.allocate(sizeof(camera_interface_pkg__srv__SetCalibration_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface_pkg__srv__SetCalibration_Response));
  bool success = camera_interface_pkg__srv__SetCalibration_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface_pkg__srv__SetCalibration_Response__destroy(camera_interface_pkg__srv__SetCalibration_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface_pkg__srv__SetCalibration_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface_pkg__srv__SetCalibration_Response__Sequence__init(camera_interface_pkg__srv__SetCalibration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Response * data = NULL;

  if (size) {
    data = (camera_interface_pkg__srv__SetCalibration_Response *)allocator.zero_allocate(size, sizeof(camera_interface_pkg__srv__SetCalibration_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface_pkg__srv__SetCalibration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface_pkg__srv__SetCalibration_Response__fini(&data[i - 1]);
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
camera_interface_pkg__srv__SetCalibration_Response__Sequence__fini(camera_interface_pkg__srv__SetCalibration_Response__Sequence * array)
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
      camera_interface_pkg__srv__SetCalibration_Response__fini(&array->data[i]);
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

camera_interface_pkg__srv__SetCalibration_Response__Sequence *
camera_interface_pkg__srv__SetCalibration_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__srv__SetCalibration_Response__Sequence * array = (camera_interface_pkg__srv__SetCalibration_Response__Sequence *)allocator.allocate(sizeof(camera_interface_pkg__srv__SetCalibration_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface_pkg__srv__SetCalibration_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface_pkg__srv__SetCalibration_Response__Sequence__destroy(camera_interface_pkg__srv__SetCalibration_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface_pkg__srv__SetCalibration_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface_pkg__srv__SetCalibration_Response__Sequence__are_equal(const camera_interface_pkg__srv__SetCalibration_Response__Sequence * lhs, const camera_interface_pkg__srv__SetCalibration_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface_pkg__srv__SetCalibration_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface_pkg__srv__SetCalibration_Response__Sequence__copy(
  const camera_interface_pkg__srv__SetCalibration_Response__Sequence * input,
  camera_interface_pkg__srv__SetCalibration_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface_pkg__srv__SetCalibration_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface_pkg__srv__SetCalibration_Response * data =
      (camera_interface_pkg__srv__SetCalibration_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface_pkg__srv__SetCalibration_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface_pkg__srv__SetCalibration_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface_pkg__srv__SetCalibration_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
