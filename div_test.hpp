#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
	Op* first = new Op(12);
	Op* second = new Op(3);
	Div* test = new Div(first, second);
	EXPECT_EQ(test->evaluate(), 4);
}

#endif //__DIV_TEST_HPP__
