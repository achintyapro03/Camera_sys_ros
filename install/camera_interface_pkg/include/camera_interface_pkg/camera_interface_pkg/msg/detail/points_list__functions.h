// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__FUNCTIONS_H_
#define CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "camera_interface_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "camera_interface_pkg/msg/detail/points_list__struct.h"

/// Initialize msg/PointsList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_interface_pkg__msg__PointsList
 * )) before or use
 * camera_interface_pkg__msg__PointsList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__init(camera_interface_pkg__msg__PointsList * msg);

/// Finalize msg/PointsList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__msg__PointsList__fini(camera_interface_pkg__msg__PointsList * msg);

/// Create msg/PointsList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_interface_pkg__msg__PointsList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__msg__PointsList *
camera_interface_pkg__msg__PointsList__create();

/// Destroy msg/PointsList message.
/**
 * It calls
 * camera_interface_pkg__msg__PointsList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__msg__PointsList__destroy(camera_interface_pkg__msg__PointsList * msg);

/// Check for msg/PointsList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__are_equal(const camera_interface_pkg__msg__PointsList * lhs, const camera_interface_pkg__msg__PointsList * rhs);

/// Copy a msg/PointsList message.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__copy(
  const camera_interface_pkg__msg__PointsList * input,
  camera_interface_pkg__msg__PointsList * output);

/// Initialize array of msg/PointsList messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_interface_pkg__msg__PointsList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__Sequence__init(camera_interface_pkg__msg__PointsList__Sequence * array, size_t size);

/// Finalize array of msg/PointsList messages.
/**
 * It calls
 * camera_interface_pkg__msg__PointsList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__msg__PointsList__Sequence__fini(camera_interface_pkg__msg__PointsList__Sequence * array);

/// Create array of msg/PointsList messages.
/**
 * It allocates the memory for the array and calls
 * camera_interface_pkg__msg__PointsList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__msg__PointsList__Sequence *
camera_interface_pkg__msg__PointsList__Sequence__create(size_t size);

/// Destroy array of msg/PointsList messages.
/**
 * It calls
 * camera_interface_pkg__msg__PointsList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__msg__PointsList__Sequence__destroy(camera_interface_pkg__msg__PointsList__Sequence * array);

/// Check for msg/PointsList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__Sequence__are_equal(const camera_interface_pkg__msg__PointsList__Sequence * lhs, const camera_interface_pkg__msg__PointsList__Sequence * rhs);

/// Copy an array of msg/PointsList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__msg__PointsList__Sequence__copy(
  const camera_interface_pkg__msg__PointsList__Sequence * input,
  camera_interface_pkg__msg__PointsList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__MSG__DETAIL__POINTS_LIST__FUNCTIONS_H_
