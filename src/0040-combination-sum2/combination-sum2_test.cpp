#include <gtest/gtest.h>
#include "combination-sum2.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{10,1,2,7,6,1,5};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum2(in, 8);
	vector<vector<int>> real{{1,7}, {1,2,5}, {1,1,6}, {2,6}};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest2){
	vector<int> in{2,5,2,1,2};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum2(in, 5);
	vector<vector<int>> real{{5}, {1,2,2}};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest3){
	vector<int> in{1,1};
	Solution solution;
	vector<vector<int>> pred = solution.combinationSum2(in, 1);
	vector<vector<int>> real{{1}};
	ASSERT_EQ(pred, real);
}
