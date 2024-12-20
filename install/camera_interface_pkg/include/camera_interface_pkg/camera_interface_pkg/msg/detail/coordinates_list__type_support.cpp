// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from camera_interface_pkg:msg/CoordinatesList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_interface_pkg/msg/detail/coordinates_list__struct.hpp"
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

void CoordinatesList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) camera_interface_pkg::msg::CoordinatesList(_init);
}

void CoordinatesList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<camera_interface_pkg::msg::CoordinatesList *>(message_memory);
  typed_message->~CoordinatesList();
}

size_t size_function__CoordinatesList__coordinates_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<camera_interface_pkg::msg::Coordinates> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CoordinatesList__coordinates_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<camera_interface_pkg::msg::Coordinates> *>(untyped_member);
  return &member[index];
}

void * get_function__CoordinatesList__coordinates_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<camera_interface_pkg::msg::Coordinates> *>(untyped_member);
  return &member[index];
}

void fetch_function__CoordinatesList__coordinates_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const camera_interface_pkg::msg::Coordinates *>(
    get_const_function__CoordinatesList__coordinates_list(untyped_member, index));
  auto & value = *reinterpret_cast<camera_interface_pkg::msg::Coordinates *>(untyped_value);
  value = item;
}

void assign_function__CoordinatesList__coordinates_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<camera_interface_pkg::msg::Coordinates *>(
    get_function__CoordinatesList__coordinates_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const camera_interface_pkg::msg::Coordinates *>(untyped_value);
  item = value;
}

void resize_function__CoordinatesList__coordinates_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<camera_interface_pkg::msg::Coordinates> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesList_message_member_array[1] = {
  {
    "coordinates_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<camera_interface_pkg::msg::Coordinates>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface_pkg::msg::CoordinatesList, coordinates_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__CoordinatesList__coordinates_list,  // size() function pointer
    get_const_function__CoordinatesList__coordinates_list,  // get_const(index) function pointer
    get_function__CoordinatesList__coordinates_list,  // get(index) function pointer
    fetch_function__CoordinatesList__coordinates_list,  // fetch(index, &value) function pointer
    assign_function__CoordinatesList__coordinates_list,  // assign(index, value) function pointer
    resize_function__CoordinatesList__coordinates_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesList_message_members = {
  "camera_interface_pkg::msg",  // message namespace
  "CoordinatesList",  // message name
  1,  // number of fields
  sizeof(camera_interface_pkg::msg::CoordinatesList),
  CoordinatesList_message_member_array,  // message members
  CoordinatesList_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesList_message_members,
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
get_message_type_support_handle<camera_interface_pkg::msg::CoordinatesList>()
{
  return &::camera_interface_pkg::msg::rosidl_typesupport_introspection_cpp::CoordinatesList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_interface_pkg, msg, CoordinatesList)() {
  return &::camera_interface_pkg::msg::rosidl_typesupport_introspection_cpp::CoordinatesList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
