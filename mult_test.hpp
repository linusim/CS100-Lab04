#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluateNonZero) {
	Op* first = new Op(3);
	Op* second = new Op(10);
	Mult* test = new Mult(first, second);
	EXPECT_EQ(test->evaluate(), 30);
}

#endif //__MULT_TEST_HPP__
