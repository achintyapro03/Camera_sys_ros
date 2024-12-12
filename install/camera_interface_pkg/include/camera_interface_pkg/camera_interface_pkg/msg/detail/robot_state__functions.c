// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface_pkg:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "camera_interface_pkg/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
camera_interface_pkg__msg__RobotState__init(camera_interface_pkg__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // on_off
  // n20_angle1
  // n20_angle2
  // n20_angle3
  // n20_angle4
  // n20_angle5
  // wrist_servo_angle
  // thumb_servo_angle
  // wrist_stepper_angle
  return true;
}

void
camera_interface_pkg__msg__RobotState__fini(camera_interface_pkg__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // on_off
  // n20_angle1
  // n20_angle2
  // n20_angle3
  // n20_angle4
  // n20_angle5
  // wrist_servo_angle
  // thumb_servo_angle
  // wrist_stepper_angle
}

bool
camera_interface_pkg__msg__RobotState__are_equal(const camera_interface_pkg__msg__RobotState * lhs, const camera_interface_pkg__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // on_off
  if (lhs->on_off != rhs->on_off) {
    return false;
  }
  // n20_angle1
  if (lhs->n20_angle1 != rhs->n20_angle1) {
    return false;
  }
  // n20_angle2
  if (lhs->n20_angle2 != rhs->n20_angle2) {
    return false;
  }
  // n20_angle3
  if (lhs->n20_angle3 != rhs->n20_angle3) {
    return false;
  }
  // n20_angle4
  if (lhs->n20_angle4 != rhs->n20_angle4) {
    return false;
  }
  // n20_angle5
  if (lhs->n20_angle5 != rhs->n20_angle5) {
    return false;
  }
  // wrist_servo_angle
  if (lhs->wrist_servo_angle != rhs->wrist_servo_angle) {
    return false;
  }
  // thumb_servo_angle
  if (lhs->thumb_servo_angle != rhs->thumb_servo_angle) {
    return false;
  }
  // wrist_stepper_angle
  if (lhs->wrist_stepper_angle != rhs->wrist_stepper_angle) {
    return false;
  }
  return true;
}

bool
camera_interface_pkg__msg__RobotState__copy(
  const camera_interface_pkg__msg__RobotState * input,
  camera_interface_pkg__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // on_off
  output->on_off = input->on_off;
  // n20_angle1
  output->n20_angle1 = input->n20_angle1;
  // n20_angle2
  output->n20_angle2 = input->n20_angle2;
  // n20_angle3
  output->n20_angle3 = input->n20_angle3;
  // n20_angle4
  output->n20_angle4 = input->n20_angle4;
  // n20_angle5
  output->n20_angle5 = input->n20_angle5;
  // wrist_servo_angle
  output->wrist_servo_angle = input->wrist_servo_angle;
  // thumb_servo_angle
  output->thumb_servo_angle = input->thumb_servo_angle;
  // wrist_stepper_angle
  output->wrist_stepper_angle = input->wrist_stepper_angle;
  return true;
}

camera_interface_pkg__msg__RobotState *
camera_interface_pkg__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__RobotState * msg = (camera_interface_pkg__msg__RobotState *)allocator.allocate(sizeof(camera_interface_pkg__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface_pkg__msg__RobotState));
  bool success = camera_interface_pkg__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface_pkg__msg__RobotState__destroy(camera_interface_pkg__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface_pkg__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface_pkg__msg__RobotState__Sequence__init(camera_interface_pkg__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__RobotState * data = NULL;

  if (size) {
    data = (camera_interface_pkg__msg__RobotState *)allocator.zero_allocate(size, sizeof(camera_interface_pkg__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface_pkg__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface_pkg__msg__RobotState__fini(&data[i - 1]);
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
camera_interface_pkg__msg__RobotState__Sequence__fini(camera_interface_pkg__msg__RobotState__Sequence * array)
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
      camera_interface_pkg__msg__RobotState__fini(&array->data[i]);
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

camera_interface_pkg__msg__RobotState__Sequence *
camera_interface_pkg__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface_pkg__msg__RobotState__Sequence * array = (camera_interface_pkg__msg__RobotState__Sequence *)allocator.allocate(sizeof(camera_interface_pkg__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface_pkg__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface_pkg__msg__RobotState__Sequence__destroy(camera_interface_pkg__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface_pkg__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface_pkg__msg__RobotState__Sequence__are_equal(const camera_interface_pkg__msg__RobotState__Sequence * lhs, const camera_interface_pkg__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface_pkg__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface_pkg__msg__RobotState__Sequence__copy(
  const camera_interface_pkg__msg__RobotState__Sequence * input,
  camera_interface_pkg__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface_pkg__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface_pkg__msg__RobotState * data =
      (camera_interface_pkg__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface_pkg__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface_pkg__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface_pkg__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
