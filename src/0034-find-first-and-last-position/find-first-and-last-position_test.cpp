#include <gtest/gtest.h>
#include "find-first-and-last-position.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{5,7,7,8,8,10};
	Solution solution;
	vector<int> pred = solution.searchRange(in, 8);
	ASSERT_EQ(pred[0], 3);
	ASSERT_EQ(pred[1], 4);
}

TEST(Solution, SimpleTest2){
	vector<int> in{5,7,7,8,8,10};
	Solution solution;
	vector<int> pred = solution.searchRange(in, 6);
	ASSERT_EQ(pred[0], -1);
	ASSERT_EQ(pred[1], -1);
}

TEST(Solution, SimpleTest3){
	vector<int> in{};
	Solution solution;
	vector<int> pred = solution.searchRange(in, 0);
	ASSERT_EQ(pred[0], -1);
	ASSERT_EQ(pred[1], -1);
}
