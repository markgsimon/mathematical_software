#include <gtest/gtest.h>
#include "cas/math/mathlib.h"
#include <stdexcept>

// my first c++ unit test
TEST(CASMathlibTest, AbsoluteValue) {

  // 
  EXPECT_DOUBLE_EQ(cas::math::absolute_value(5.0), 5.0);
  EXPECT_DOUBLE_EQ(cas::math::absolute_value(-3.14), 3.14);
  EXPECT_DOUBLE_EQ(cas::math::absolute_value(0.0), 0.0);



}
