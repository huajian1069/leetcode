#include <gtest/gtest.h>
#include "maximum-subarray.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{-2, 1, -3, 4, -1, 2, 1, -5, 4};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, 6);
}

TEST(Solution, SimpleTest2){
	vector<int> in{1};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, 1);
}

TEST(Solution, SimpleTest3){
	vector<int> in{0};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest4){
	vector<int> in{-2, 1, -3, 4, -1};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, 4);
}

TEST(Solution, SimpleTest5){
	vector<int> in{-1};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, -1);
}

TEST(Solution, SimpleTest6){
	vector<int> in{-1, -2};
	Solution solution;
	int pred = solution.maxSubArray(in);
	ASSERT_EQ(pred, -1);
}