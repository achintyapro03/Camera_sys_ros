// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface_pkg:msg/CoordinatesList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface_pkg/msg/detail/coordinates_list__rosidl_typesupport_introspection_c.h"
#include "camera_interface_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface_pkg/msg/detail/coordinates_list__functions.h"
#include "camera_interface_pkg/msg/detail/coordinates_list__struct.h"


// Include directives for member types
// Member `coordinates_list`
#include "camera_interface_pkg/msg/coordinates.h"
// Member `coordinates_list`
#include "camera_interface_pkg/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface_pkg__msg__CoordinatesList__init(message_memory);
}

void camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_fini_function(void * message_memory)
{
  camera_interface_pkg__msg__CoordinatesList__fini(message_memory);
}

size_t camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__size_function__CoordinatesList__coordinates_list(
  const void * untyped_member)
{
  const camera_interface_pkg__msg__Coordinates__Sequence * member =
    (const camera_interface_pkg__msg__Coordinates__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_const_function__CoordinatesList__coordinates_list(
  const void * untyped_member, size_t index)
{
  const camera_interface_pkg__msg__Coordinates__Sequence * member =
    (const camera_interface_pkg__msg__Coordinates__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_function__CoordinatesList__coordinates_list(
  void * untyped_member, size_t index)
{
  camera_interface_pkg__msg__Coordinates__Sequence * member =
    (camera_interface_pkg__msg__Coordinates__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__fetch_function__CoordinatesList__coordinates_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const camera_interface_pkg__msg__Coordinates * item =
    ((const camera_interface_pkg__msg__Coordinates *)
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_const_function__CoordinatesList__coordinates_list(untyped_member, index));
  camera_interface_pkg__msg__Coordinates * value =
    (camera_interface_pkg__msg__Coordinates *)(untyped_value);
  *value = *item;
}

void camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__assign_function__CoordinatesList__coordinates_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  camera_interface_pkg__msg__Coordinates * item =
    ((camera_interface_pkg__msg__Coordinates *)
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_function__CoordinatesList__coordinates_list(untyped_member, index));
  const camera_interface_pkg__msg__Coordinates * value =
    (const camera_interface_pkg__msg__Coordinates *)(untyped_value);
  *item = *value;
}

bool camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__resize_function__CoordinatesList__coordinates_list(
  void * untyped_member, size_t size)
{
  camera_interface_pkg__msg__Coordinates__Sequence * member =
    (camera_interface_pkg__msg__Coordinates__Sequence *)(untyped_member);
  camera_interface_pkg__msg__Coordinates__Sequence__fini(member);
  return camera_interface_pkg__msg__Coordinates__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_member_array[1] = {
  {
    "coordinates_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface_pkg__msg__CoordinatesList, coordinates_list),  // bytes offset in struct
    NULL,  // default value
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__size_function__CoordinatesList__coordinates_list,  // size() function pointer
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_const_function__CoordinatesList__coordinates_list,  // get_const(index) function pointer
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__get_function__CoordinatesList__coordinates_list,  // get(index) function pointer
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__fetch_function__CoordinatesList__coordinates_list,  // fetch(index, &value) function pointer
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__assign_function__CoordinatesList__coordinates_list,  // assign(index, value) function pointer
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__resize_function__CoordinatesList__coordinates_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_members = {
  "camera_interface_pkg__msg",  // message namespace
  "CoordinatesList",  // message name
  1,  // number of fields
  sizeof(camera_interface_pkg__msg__CoordinatesList),
  camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_member_array,  // message members
  camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_type_support_handle = {
  0,
  &camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, msg, CoordinatesList)() {
  camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, msg, Coordinates)();
  if (!camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_type_support_handle.typesupport_identifier) {
    camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface_pkg__msg__CoordinatesList__rosidl_typesupport_introspection_c__CoordinatesList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
