// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__FUNCTIONS_H_
#define CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "camera_interface_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "camera_interface_pkg/srv/detail/update_n20_set_points__struct.h"

/// Initialize srv/UpdateN20SetPoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request
 * )) before or use
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Request__init(camera_interface_pkg__srv__UpdateN20SetPoints_Request * msg);

/// Finalize srv/UpdateN20SetPoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Request__fini(camera_interface_pkg__srv__UpdateN20SetPoints_Request * msg);

/// Create srv/UpdateN20SetPoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__srv__UpdateN20SetPoints_Request *
camera_interface_pkg__srv__UpdateN20SetPoints_Request__create();

/// Destroy srv/UpdateN20SetPoints message.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Request__destroy(camera_interface_pkg__srv__UpdateN20SetPoints_Request * msg);

/// Check for srv/UpdateN20SetPoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Request__are_equal(const camera_interface_pkg__srv__UpdateN20SetPoints_Request * lhs, const camera_interface_pkg__srv__UpdateN20SetPoints_Request * rhs);

/// Copy a srv/UpdateN20SetPoints message.
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
camera_interface_pkg__srv__UpdateN20SetPoints_Request__copy(
  const camera_interface_pkg__srv__UpdateN20SetPoints_Request * input,
  camera_interface_pkg__srv__UpdateN20SetPoints_Request * output);

/// Initialize array of srv/UpdateN20SetPoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__init(camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * array, size_t size);

/// Finalize array of srv/UpdateN20SetPoints messages.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__fini(camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * array);

/// Create array of srv/UpdateN20SetPoints messages.
/**
 * It allocates the memory for the array and calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence *
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__create(size_t size);

/// Destroy array of srv/UpdateN20SetPoints messages.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__destroy(camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * array);

/// Check for srv/UpdateN20SetPoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__are_equal(const camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * lhs, const camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * rhs);

/// Copy an array of srv/UpdateN20SetPoints messages.
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
camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence__copy(
  const camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * input,
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__Sequence * output);

/// Initialize srv/UpdateN20SetPoints message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response
 * )) before or use
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Response__init(camera_interface_pkg__srv__UpdateN20SetPoints_Response * msg);

/// Finalize srv/UpdateN20SetPoints message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Response__fini(camera_interface_pkg__srv__UpdateN20SetPoints_Response * msg);

/// Create srv/UpdateN20SetPoints message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__srv__UpdateN20SetPoints_Response *
camera_interface_pkg__srv__UpdateN20SetPoints_Response__create();

/// Destroy srv/UpdateN20SetPoints message.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Response__destroy(camera_interface_pkg__srv__UpdateN20SetPoints_Response * msg);

/// Check for srv/UpdateN20SetPoints message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Response__are_equal(const camera_interface_pkg__srv__UpdateN20SetPoints_Response * lhs, const camera_interface_pkg__srv__UpdateN20SetPoints_Response * rhs);

/// Copy a srv/UpdateN20SetPoints message.
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
camera_interface_pkg__srv__UpdateN20SetPoints_Response__copy(
  const camera_interface_pkg__srv__UpdateN20SetPoints_Response * input,
  camera_interface_pkg__srv__UpdateN20SetPoints_Response * output);

/// Initialize array of srv/UpdateN20SetPoints messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__init(camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * array, size_t size);

/// Finalize array of srv/UpdateN20SetPoints messages.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__fini(camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * array);

/// Create array of srv/UpdateN20SetPoints messages.
/**
 * It allocates the memory for the array and calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence *
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__create(size_t size);

/// Destroy array of srv/UpdateN20SetPoints messages.
/**
 * It calls
 * camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
void
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__destroy(camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * array);

/// Check for srv/UpdateN20SetPoints message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface_pkg
bool
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__are_equal(const camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * lhs, const camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * rhs);

/// Copy an array of srv/UpdateN20SetPoints messages.
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
camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence__copy(
  const camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * input,
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE_PKG__SRV__DETAIL__UPDATE_N20_SET_POINTS__FUNCTIONS_H_
