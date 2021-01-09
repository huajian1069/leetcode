#include <gtest/gtest.h>
#include "3sum-closet.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{0, 0, 0};
	Solution solution;
	int pred = solution.threeSumClosest(in, 1);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest2){
	vector<int> in{0,2,1,-3};
	Solution solution;
	int pred = solution.threeSumClosest(in, 1);
	ASSERT_EQ(pred, 0);
}