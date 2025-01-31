//------------------------------------------------------------------------------
// Copyright 2021 H2O.ai
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//------------------------------------------------------------------------------
#ifndef dt_TYPES_TYPE_BOOL_h
#define dt_TYPES_TYPE_BOOL_h
#include "python/_all.h"
#include "types/type_numeric.h"
namespace dt {



class Type_Bool8 : public Type_Numeric {
  public:
    Type_Bool8() : Type_Numeric(SType::BOOL) {}

    bool is_boolean() const override { return true; }
    bool can_be_read_as_int8() const override { return true; }

    std::string to_string() const override {
      return "bool8";
    }

    py::oobj min() const override {
      return py::False();
    }

    py::oobj max() const override {
      return py::True();
    }

    const char* struct_format() const override {
      return "?";
    }
};



}  // namespace dt
#endif
