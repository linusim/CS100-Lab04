#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Op* base = new Op(2);
    Op* power = new Op(2);
    Pow* test = new Pow(base, power);
    EXPECT_EQ(test->evaluate(),4);
}

#endif
