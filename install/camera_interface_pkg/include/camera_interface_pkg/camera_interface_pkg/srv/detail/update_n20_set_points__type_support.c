// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface_pkg:srv/UpdateN20SetPoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface_pkg/srv/detail/update_n20_set_points__rosidl_typesupport_introspection_c.h"
#include "camera_interface_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface_pkg/srv/detail/update_n20_set_points__functions.h"
#include "camera_interface_pkg/srv/detail/update_n20_set_points__struct.h"


// Include directives for member types
// Member `setpoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__init(message_memory);
}

void camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_fini_function(void * message_memory)
{
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__fini(message_memory);
}

size_t camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__size_function__UpdateN20SetPoints_Request__setpoints(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateN20SetPoints_Request__setpoints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_function__UpdateN20SetPoints_Request__setpoints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateN20SetPoints_Request__setpoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateN20SetPoints_Request__setpoints(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__assign_function__UpdateN20SetPoints_Request__setpoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_function__UpdateN20SetPoints_Request__setpoints(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__resize_function__UpdateN20SetPoints_Request__setpoints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_member_array[1] = {
  {
    "setpoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface_pkg__srv__UpdateN20SetPoints_Request, setpoints),  // bytes offset in struct
    NULL,  // default value
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__size_function__UpdateN20SetPoints_Request__setpoints,  // size() function pointer
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateN20SetPoints_Request__setpoints,  // get_const(index) function pointer
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__get_function__UpdateN20SetPoints_Request__setpoints,  // get(index) function pointer
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateN20SetPoints_Request__setpoints,  // fetch(index, &value) function pointer
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__assign_function__UpdateN20SetPoints_Request__setpoints,  // assign(index, value) function pointer
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__resize_function__UpdateN20SetPoints_Request__setpoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_members = {
  "camera_interface_pkg__srv",  // message namespace
  "UpdateN20SetPoints_Request",  // message name
  1,  // number of fields
  sizeof(camera_interface_pkg__srv__UpdateN20SetPoints_Request),
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_member_array,  // message members
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_type_support_handle = {
  0,
  &camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Request)() {
  if (!camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_type_support_handle.typesupport_identifier) {
    camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface_pkg__srv__UpdateN20SetPoints_Request__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "camera_interface_pkg/srv/detail/update_n20_set_points__rosidl_typesupport_introspection_c.h"
// already included above
// #include "camera_interface_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "camera_interface_pkg/srv/detail/update_n20_set_points__functions.h"
// already included above
// #include "camera_interface_pkg/srv/detail/update_n20_set_points__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__init(message_memory);
}

void camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_fini_function(void * message_memory)
{
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface_pkg__srv__UpdateN20SetPoints_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_members = {
  "camera_interface_pkg__srv",  // message namespace
  "UpdateN20SetPoints_Response",  // message name
  1,  // number of fields
  sizeof(camera_interface_pkg__srv__UpdateN20SetPoints_Response),
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_member_array,  // message members
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_type_support_handle = {
  0,
  &camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Response)() {
  if (!camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_type_support_handle.typesupport_identifier) {
    camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface_pkg__srv__UpdateN20SetPoints_Response__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "camera_interface_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "camera_interface_pkg/srv/detail/update_n20_set_points__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_members = {
  "camera_interface_pkg__srv",  // service namespace
  "UpdateN20SetPoints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Request_message_type_support_handle,
  NULL  // response message
  // camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_Response_message_type_support_handle
};

static rosidl_service_type_support_t camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_type_support_handle = {
  0,
  &camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints)() {
  if (!camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_type_support_handle.typesupport_identifier) {
    camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface_pkg, srv, UpdateN20SetPoints_Response)()->data;
  }

  return &camera_interface_pkg__srv__detail__update_n20_set_points__rosidl_typesupport_introspection_c__UpdateN20SetPoints_service_type_support_handle;
}
