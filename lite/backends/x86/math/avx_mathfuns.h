//  Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once
#include "lite/backends/x86/cpu_info.h"
#ifdef __AVX__
namespace paddle {
namespace lite {
namespace x86 {
namespace math {
/* __m128 is ugly to write */
typedef __m256 v8sf;   // vector of 8 float (avx)
typedef __m256i v8si;  // vector of 8 int   (avx)
typedef __m128i v4si;  // vector of 8 int   (avx)
v8sf log256_ps(v8sf x);
v8sf exp256_ps(v8sf x);
v8sf pow256_ps(v8sf x, v8sf y);
v8sf sin256_ps(v8sf x);
v8sf cos256_ps(v8sf x);
void sincos256_ps(v8sf x, v8sf *s, v8sf *c);
}  // namespace math
}  // namespace x86
}  // namespace lite
}  // namespace paddle
#endif
