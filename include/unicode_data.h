/* Copyright 2020 Zhao HG

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */
#ifndef INCLUDE_UNICODE_DATA_H_
#define INCLUDE_UNICODE_DATA_H_

#include "unicode_char.h"

extern const int CODE_NUM;
extern const int CONTINUOUS_NUM;
extern const int CODE_VALUE[];
extern const unicode::GeneralCategory GENERAL_CATEGORY[];
const int CANONICAL_COMBINING_NUM = 872;
extern const int CANONICAL_COMBINING_INDEX[];
extern const int CANONICAL_COMBINING_CLASS[];
extern const unicode::BidirectionalCategory BIDIRECTIONAL_CATEGORY[];
const int UPPER_NUM = 1410;
extern const int UPPER_INDEX[];
extern const int UPPER_CASE[];
const int LOWER_NUM = 1393;
extern const int LOWER_INDEX[];
extern const int LOWER_CASE[];
const int TITLE_NUM = 1414;
extern const int TITLE_INDEX[];
extern const int TITLE_CASE[];

#endif  // INCLUDE_UNICODE_DATA_H_
