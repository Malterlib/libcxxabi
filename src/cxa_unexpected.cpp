//===------------------------- cxa_unexpected.cpp -------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <exception>
#include <cxxabi.h>
#include "cxa_exception.hpp"

namespace __cxxabiv1
{

#ifndef LIBCXXABI_NODEFAULTVISIBILITY
#pragma GCC visibility push(default)
#endif

extern "C"
{

}

#ifndef LIBCXXABI_NODEFAULTVISIBILITY
#pragma GCC visibility pop
#endif

}  // namespace __cxxabiv1

