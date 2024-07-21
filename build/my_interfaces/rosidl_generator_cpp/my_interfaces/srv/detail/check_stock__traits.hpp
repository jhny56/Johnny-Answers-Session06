// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_
#define MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/srv/detail/check_stock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckStock_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: item_name
  {
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckStock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: item_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckStock_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::CheckStock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::CheckStock_Request & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::CheckStock_Request>()
{
  return "my_interfaces::srv::CheckStock_Request";
}

template<>
inline const char * name<my_interfaces::srv::CheckStock_Request>()
{
  return "my_interfaces/srv/CheckStock_Request";
}

template<>
struct has_fixed_size<my_interfaces::srv::CheckStock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::srv::CheckStock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::srv::CheckStock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckStock_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: stock_level
  {
    out << "stock_level: ";
    rosidl_generator_traits::value_to_yaml(msg.stock_level, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckStock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: stock_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stock_level: ";
    rosidl_generator_traits::value_to_yaml(msg.stock_level, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckStock_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::CheckStock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::CheckStock_Response & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::CheckStock_Response>()
{
  return "my_interfaces::srv::CheckStock_Response";
}

template<>
inline const char * name<my_interfaces::srv::CheckStock_Response>()
{
  return "my_interfaces/srv/CheckStock_Response";
}

template<>
struct has_fixed_size<my_interfaces::srv::CheckStock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::srv::CheckStock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::srv::CheckStock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::srv::CheckStock>()
{
  return "my_interfaces::srv::CheckStock";
}

template<>
inline const char * name<my_interfaces::srv::CheckStock>()
{
  return "my_interfaces/srv/CheckStock";
}

template<>
struct has_fixed_size<my_interfaces::srv::CheckStock>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces::srv::CheckStock_Request>::value &&
    has_fixed_size<my_interfaces::srv::CheckStock_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces::srv::CheckStock>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces::srv::CheckStock_Request>::value &&
    has_bounded_size<my_interfaces::srv::CheckStock_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces::srv::CheckStock>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces::srv::CheckStock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces::srv::CheckStock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_
