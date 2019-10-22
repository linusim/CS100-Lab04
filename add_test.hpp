#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"

TEST(AddTest, AddEvaluateNonZero) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Add* test = new Add(one, two);
    EXPECT_EQ(test->evaluate(),3);
}

#endif
