#include <gtest/gtest.h>
#include "4sum.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	vector<int> in{1, 0, -1, 0, -2, 2};
	vector<vector<int>> pred = solution.fourSum(in, 0);
	vector<vector<int>> real{vector<int>{-2, -1, 1, 2}, vector<int>{-2, 0, 0, 2}, vector<int>{-1, 0, 0, 1}}; 
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	vector<int> in;
	vector<vector<int>> pred = solution.fourSum(in, 0);
	vector<vector<int>> real; 
	// cout << "real: " << real << endl;
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	vector<int> in{0};
	vector<vector<int>> pred = solution.fourSum(in, 0);
	vector<vector<int>> real; 
	// cout << "real: " << real << endl;
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest4){
	Solution solution;
	vector<int> in{0, 0, 0, 0};
	vector<vector<int>> pred = solution.fourSum(in, 0);
	vector<vector<int>> real{vector<int>{0,0,0,0}}; 
	// cout << "real: " << real << endl;
	ASSERT_EQ(pred, real);
}