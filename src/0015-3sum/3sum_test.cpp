#include <gtest/gtest.h>
#include "3sum.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	vector<int> in{-1, 0, 1, 2, -1, -4};
	vector<vector<int>> pred = solution.threeSum(in);
	vector<vector<int>> real{vector<int>{-1, 0, 1}, vector<int>{-1, 2, -1}}; 
	ASSERT_EQ(pred, real);
}
