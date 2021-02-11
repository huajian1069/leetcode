#include <gtest/gtest.h>
#include "search-in-rotated-sorted-array.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{4,5,6,7,0,1,2};
	Solution solution;
	int pred = solution.search1(in, 0);
	ASSERT_EQ(pred, 4);
	pred = solution.search2(in, 0);
	ASSERT_EQ(pred, 4);
}

TEST(Solution, SimpleTest2){
	vector<int> in{4,5,6,7,0,1,2};
	Solution solution;
	int pred = solution.search1(in, 3);
	ASSERT_EQ(pred, -1);
	pred = solution.search2(in, 3);
	ASSERT_EQ(pred, -1);
}


TEST(Solution, SimpleTest3){
	vector<int> in{1};
	Solution solution;
	int pred = solution.search1(in, 0);
	ASSERT_EQ(pred, -1);
	pred = solution.search2(in, 0);
	ASSERT_EQ(pred, -1);
}


TEST(Solution, SimpleTest4){
	vector<int> in{1};
	Solution solution;
	int pred = solution.search1(in, 1);
	ASSERT_EQ(pred, 0);
	pred = solution.search2(in, 1);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest5){
	vector<int> in{4,5,6,7,8,1,2,3};
	Solution solution;
	int pred = solution.search1(in, 8);
	ASSERT_EQ(pred, 4);
	pred = solution.search2(in, 8);
	ASSERT_EQ(pred, 4);
}


