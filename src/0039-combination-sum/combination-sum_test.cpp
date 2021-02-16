#include <gtest/gtest.h>
#include "combination-sum.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{2,3,6,7};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum(in, 7);
	vector<vector<int>> real{{7}, {2,2,3}};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest2){
	vector<int> in{2,3,5};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum(in, 8);
	vector<vector<int>> real{{2,2,2,2}, {2,3,3}, {3,5}};
	ASSERT_EQ(pred, real);
}


TEST(Solution, SimpleTest3){
	vector<int> in{2};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum(in, 1);
	vector<vector<int>> real;
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest4){
	vector<int> in{1};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum(in, 1);
	vector<vector<int>> real{{1}};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest5){
	vector<int> in{1};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum(in, 2);
	vector<vector<int>> real{{1,1}};
	ASSERT_EQ(pred, real);
}