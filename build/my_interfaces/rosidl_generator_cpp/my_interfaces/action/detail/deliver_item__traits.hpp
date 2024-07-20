// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:action/DeliverItem.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__TRAITS_HPP_
#define MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/action/detail/deliver_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: item_name
  {
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << ", ";
  }

  // member: quantity
  {
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_Goal & msg,
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

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_Goal & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_Goal>()
{
  return "my_interfaces::action::DeliverItem_Goal";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_Goal>()
{
  return "my_interfaces/action/DeliverItem_Goal";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const DeliverItem_Result & msg,
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

inline std::string to_yaml(const DeliverItem_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_Result & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_Result>()
{
  return "my_interfaces::action::DeliverItem_Result";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_Result>()
{
  return "my_interfaces/action/DeliverItem_Result";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_Feedback & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_Feedback>()
{
  return "my_interfaces::action::DeliverItem_Feedback";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_Feedback>()
{
  return "my_interfaces/action/DeliverItem_Feedback";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_interfaces/action/detail/deliver_item__traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_SendGoal_Request & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_SendGoal_Request>()
{
  return "my_interfaces::action::DeliverItem_SendGoal_Request";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_SendGoal_Request>()
{
  return "my_interfaces/action/DeliverItem_SendGoal_Request";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_interfaces::action::DeliverItem_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_interfaces::action::DeliverItem_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_SendGoal_Response & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_SendGoal_Response>()
{
  return "my_interfaces::action::DeliverItem_SendGoal_Response";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_SendGoal_Response>()
{
  return "my_interfaces/action/DeliverItem_SendGoal_Response";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_SendGoal>()
{
  return "my_interfaces::action::DeliverItem_SendGoal";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_SendGoal>()
{
  return "my_interfaces/action/DeliverItem_SendGoal";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces::action::DeliverItem_SendGoal_Request>::value &&
    has_fixed_size<my_interfaces::action::DeliverItem_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces::action::DeliverItem_SendGoal_Request>::value &&
    has_bounded_size<my_interfaces::action::DeliverItem_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces::action::DeliverItem_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces::action::DeliverItem_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces::action::DeliverItem_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_GetResult_Request & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_GetResult_Request>()
{
  return "my_interfaces::action::DeliverItem_GetResult_Request";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_GetResult_Request>()
{
  return "my_interfaces/action/DeliverItem_GetResult_Request";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_interfaces/action/detail/deliver_item__traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_GetResult_Response & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_GetResult_Response>()
{
  return "my_interfaces::action::DeliverItem_GetResult_Response";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_GetResult_Response>()
{
  return "my_interfaces/action/DeliverItem_GetResult_Response";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_interfaces::action::DeliverItem_Result>::value> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_interfaces::action::DeliverItem_Result>::value> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_GetResult>()
{
  return "my_interfaces::action::DeliverItem_GetResult";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_GetResult>()
{
  return "my_interfaces/action/DeliverItem_GetResult";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces::action::DeliverItem_GetResult_Request>::value &&
    has_fixed_size<my_interfaces::action::DeliverItem_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces::action::DeliverItem_GetResult_Request>::value &&
    has_bounded_size<my_interfaces::action::DeliverItem_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces::action::DeliverItem_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces::action::DeliverItem_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces::action::DeliverItem_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_interfaces/action/detail/deliver_item__traits.hpp"

namespace my_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const DeliverItem_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliverItem_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliverItem_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::action::DeliverItem_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::action::DeliverItem_FeedbackMessage & msg)
{
  return my_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::action::DeliverItem_FeedbackMessage>()
{
  return "my_interfaces::action::DeliverItem_FeedbackMessage";
}

template<>
inline const char * name<my_interfaces::action::DeliverItem_FeedbackMessage>()
{
  return "my_interfaces/action/DeliverItem_FeedbackMessage";
}

template<>
struct has_fixed_size<my_interfaces::action::DeliverItem_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_interfaces::action::DeliverItem_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_interfaces::action::DeliverItem_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_interfaces::action::DeliverItem_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_interfaces::action::DeliverItem_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_interfaces::action::DeliverItem>
  : std::true_type
{
};

template<>
struct is_action_goal<my_interfaces::action::DeliverItem_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_interfaces::action::DeliverItem_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_interfaces::action::DeliverItem_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_INTERFACES__ACTION__DETAIL__DELIVER_ITEM__TRAITS_HPP_
