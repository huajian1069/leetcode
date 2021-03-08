#include <gtest/gtest.h>
#include "rotate-image.hpp"

TEST(Solution, SimpleTest1){
	vector<vector<int>> in{{1,2,3}, {4,5,6}, {7,8,9}};
	Solution solution;
	solution.rotate(in);
	vector<vector<int>> out{{7,4,1}, {8,5,2}, {9,6,3}};
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			ASSERT_EQ(in[i][j], out[i][j]);
}

TEST(Solution, SimpleTest2){
	vector<vector<int>> in{{5,1,9,11}, {2,4,8,10}, {13,3,6,7},{15,14,12,16}};
	Solution solution;
	solution.rotate(in);
	vector<vector<int>> out{{15,13,2,5}, {14,3,4,1}, {12,6,8,9}, {16,7,10,11}};
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			ASSERT_EQ(in[i][j], out[i][j]);
}