#include <gtest/gtest.h>
#include "search-insert-position.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{1,3,5,6};
	Solution solution;
	int pred = solution.searchInsert(in, 5);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest2){
	vector<int> in{1,3,5,6};
	Solution solution;
	int pred = solution.searchInsert(in, 2);
	ASSERT_EQ(pred, 1);
}

TEST(Solution, SimpleTest3){
	vector<int> in{1,3,5,6};
	Solution solution;
	int pred = solution.searchInsert(in, 7);
	ASSERT_EQ(pred, 4);
}

TEST(Solution, SimpleTest4){
	vector<int> in{1,3,5,6};
	Solution solution;
	int pred = solution.searchInsert(in, 0);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest5){
	vector<int> in{1};
	Solution solution;
	int pred = solution.searchInsert(in, 0);
	ASSERT_EQ(pred, 0);
}