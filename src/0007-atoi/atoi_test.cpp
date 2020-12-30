#include <gtest/gtest.h>
#include "atoi.hpp"

TEST(Solution, SimpleTest){
	string s = "00002147483649";
	Solution solution;
	int pred = solution.myAtoi(s);
	ASSERT_EQ(pred, 2147483647);
}