// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from camera_interface_pkg:msg/PointsList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_interface_pkg/msg/detail/points_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace camera_interface_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointsList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) camera_interface_pkg::msg::PointsList(_init);
}

void PointsList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<camera_interface_pkg::msg::PointsList *>(message_memory);
  typed_message->~PointsList();
}

size_t size_function__PointsList__points_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<camera_interface_pkg::msg::Points> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointsList__points_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<camera_interface_pkg::msg::Points> *>(untyped_member);
  return &member[index];
}

void * get_function__PointsList__points_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<camera_interface_pkg::msg::Points> *>(untyped_member);
  return &member[index];
}

void fetch_function__PointsList__points_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const camera_interface_pkg::msg::Points *>(
    get_const_function__PointsList__points_list(untyped_member, index));
  auto & value = *reinterpret_cast<camera_interface_pkg::msg::Points *>(untyped_value);
  value = item;
}

void assign_function__PointsList__points_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<camera_interface_pkg::msg::Points *>(
    get_function__PointsList__points_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const camera_interface_pkg::msg::Points *>(untyped_value);
  item = value;
}

void resize_function__PointsList__points_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<camera_interface_pkg::msg::Points> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointsList_message_member_array[1] = {
  {
    "points_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<camera_interface_pkg::msg::Points>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface_pkg::msg::PointsList, points_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointsList__points_list,  // size() function pointer
    get_const_function__PointsList__points_list,  // get_const(index) function pointer
    get_function__PointsList__points_list,  // get(index) function pointer
    fetch_function__PointsList__points_list,  // fetch(index, &value) function pointer
    assign_function__PointsList__points_list,  // assign(index, value) function pointer
    resize_function__PointsList__points_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointsList_message_members = {
  "camera_interface_pkg::msg",  // message namespace
  "PointsList",  // message name
  1,  // number of fields
  sizeof(camera_interface_pkg::msg::PointsList),
  PointsList_message_member_array,  // message members
  PointsList_init_function,  // function to initialize message memory (memory has to be allocated)
  PointsList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointsList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointsList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace camera_interface_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_interface_pkg::msg::PointsList>()
{
  return &::camera_interface_pkg::msg::rosidl_typesupport_introspection_cpp::PointsList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_interface_pkg, msg, PointsList)() {
  return &::camera_interface_pkg::msg::rosidl_typesupport_introspection_cpp::PointsList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
