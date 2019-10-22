#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Op* three = new Op(3);
    Op* two = new Op(2);
    Sub* test = new Sub(three, two);
    EXPECT_EQ(test->evaluate(),1);
}

#endif
