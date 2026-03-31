// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_one:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
#define PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project_one/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace project_one
{

namespace srv
{

inline void to_flow_style_yaml(
  const OddEvenCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OddEvenCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OddEvenCheck_Request & msg, bool use_flow_style = false)
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

}  // namespace project_one

namespace rosidl_generator_traits
{

[[deprecated("use project_one::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project_one::srv::OddEvenCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_one::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_one::srv::to_yaml() instead")]]
inline std::string to_yaml(const project_one::srv::OddEvenCheck_Request & msg)
{
  return project_one::srv::to_yaml(msg);
}

template<>
inline const char * data_type<project_one::srv::OddEvenCheck_Request>()
{
  return "project_one::srv::OddEvenCheck_Request";
}

template<>
inline const char * name<project_one::srv::OddEvenCheck_Request>()
{
  return "project_one/srv/OddEvenCheck_Request";
}

template<>
struct has_fixed_size<project_one::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_one::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_one::srv::OddEvenCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace project_one
{

namespace srv
{

inline void to_flow_style_yaml(
  const OddEvenCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: decision
  {
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OddEvenCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OddEvenCheck_Response & msg, bool use_flow_style = false)
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

}  // namespace project_one

namespace rosidl_generator_traits
{

[[deprecated("use project_one::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project_one::srv::OddEvenCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_one::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_one::srv::to_yaml() instead")]]
inline std::string to_yaml(const project_one::srv::OddEvenCheck_Response & msg)
{
  return project_one::srv::to_yaml(msg);
}

template<>
inline const char * data_type<project_one::srv::OddEvenCheck_Response>()
{
  return "project_one::srv::OddEvenCheck_Response";
}

template<>
inline const char * name<project_one::srv::OddEvenCheck_Response>()
{
  return "project_one/srv/OddEvenCheck_Response";
}

template<>
struct has_fixed_size<project_one::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project_one::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project_one::srv::OddEvenCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_one::srv::OddEvenCheck>()
{
  return "project_one::srv::OddEvenCheck";
}

template<>
inline const char * name<project_one::srv::OddEvenCheck>()
{
  return "project_one/srv/OddEvenCheck";
}

template<>
struct has_fixed_size<project_one::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<project_one::srv::OddEvenCheck_Request>::value &&
    has_fixed_size<project_one::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_one::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<project_one::srv::OddEvenCheck_Request>::value &&
    has_bounded_size<project_one::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct is_service<project_one::srv::OddEvenCheck>
  : std::true_type
{
};

template<>
struct is_service_request<project_one::srv::OddEvenCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_one::srv::OddEvenCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROJECT_ONE__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
