#include <gtest/gtest.h>
#include "no-more-inversions.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	vector<int> pred = solution.getPermutation(1,1);
	vector<int> real{1};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	vector<int> pred = solution.getPermutation(2,2);
	vector<int> real{1,2};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	vector<int> pred = solution.getPermutation(3,2);
	vector<int> real{2,1};
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest4){
	Solution solution;
	vector<int> pred = solution.getPermutation(4,3);
	vector<int> real{1,3,2};
	ASSERT_EQ(pred, real);
}

