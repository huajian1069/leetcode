#include <gtest/gtest.h>
#include "two-sum.hpp"

TEST(Solution, SimpleTest){
	Solution solution;
	vector<int> input{2, 7, 11, 15};
	vector<int> calculated = solution.twoSum(input, 9);
	vector<int> expected{0,1};
	bool ck1 = (expected[0] == calculated[0]);
	bool ck2 = (expected[1] == calculated[1]);
	ASSERT_TRUE(ck1);
	ASSERT_TRUE(ck2);
}