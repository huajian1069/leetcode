#include <gtest/gtest.h>
#include "next-permutation.hpp"

TEST(Solution, SimpleTest1){
	vector<int> nums{1,3,2};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 2);
	ASSERT_EQ(nums[1], 1);
	ASSERT_EQ(nums[2], 3);
}

TEST(Solution, SimpleTest2){
	vector<int> nums{1,2,3};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 1);
	ASSERT_EQ(nums[1], 3);
	ASSERT_EQ(nums[2], 2);
}

TEST(Solution, SimpleTest3){
	vector<int> nums{3,2,1};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 1);
	ASSERT_EQ(nums[1], 2);
	ASSERT_EQ(nums[2], 3);
}

TEST(Solution, SimpleTest4){
	vector<int> nums{1,1,5};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 1);
	ASSERT_EQ(nums[1], 5);
	ASSERT_EQ(nums[2], 1);
}

TEST(Solution, SimpleTest5){
	vector<int> nums{1};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 1);
}

TEST(Solution, SimpleTest6){
	vector<int> nums{2,3,1};
	Solution solution;
	solution.nextPermutation(nums);
	ASSERT_EQ(nums[0], 3);
	ASSERT_EQ(nums[1], 1);
	ASSERT_EQ(nums[2], 2);
}