#include <gtest/gtest.h>
#include <cmath>
#include "pow.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	ASSERT_EQ(solution.myPow(2.0, 10), pow(2.0, 10));
}

TEST(Solution, SimpleTest2){
	Solution solution;
	ASSERT_EQ(solution.myPow(2.0, 3), pow(2.0, 3));
}

TEST(Solution, SimpleTest3){
	Solution solution;
	ASSERT_EQ(solution.myPow(2.0, -2), pow(2.0, -2));
}
