#include <gtest/gtest.h>
#include "four-segments.hpp"

TEST(Solution, SimpleTest1){
	int array[4] = {1, 2, 3, 4};
	Solution solution;
	int pred = solution.maxArea(array);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest2){
	int array[4] = {5, 5, 5, 5};
	Solution solution;
	int pred = solution.maxArea(array);
	ASSERT_EQ(pred, 25);
}

TEST(Solution, SimpleTest3){
	int array[4] = {3, 1, 4, 1};
	Solution solution;
	int pred = solution.maxArea(array);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest4){
	int array[4] = {100, 20, 20, 100};
	Solution solution;
	int pred = solution.maxArea(array);
	ASSERT_EQ(pred, 2000);
}
