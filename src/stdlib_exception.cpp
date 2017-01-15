//===---------------------------- exception.cpp ---------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <exception>

#ifndef LIBCXXABI_NODEFAULTVISIBILITY
#pragma GCC visibility push(default)
#endif

namespace std
{

// exception

exception::~exception() _NOEXCEPT
{
}

const char* exception::what() const _NOEXCEPT
{
  return "std::exception";
}

// bad_exception

bad_exception::~bad_exception() _NOEXCEPT
{
}

const char* bad_exception::what() const _NOEXCEPT
{
  return "std::bad_exception";
}

}  // std

#ifndef LIBCXXABI_NODEFAULTVISIBILITY
#pragma GCC visibility pop
#endif
