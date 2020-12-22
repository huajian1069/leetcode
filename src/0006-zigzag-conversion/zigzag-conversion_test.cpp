#include <gtest/gtest.h>
#include "zigzag-conversion.cpp"

TEST(Solution, SimpleTest1){
	string s = "PAYPALISHIRING";
	int numRows = 3;
	Solution solution;
	string pred = solution.convert(s ,numRows);
	string real = "PAHNAPLSIIGYIR";
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest2){
	string s = "PAYPALISHIRING";
	int numRows = 4;
	Solution solution;
	string pred = solution.convert(s ,numRows);
	string real = "PINALSIGYAHRPI";
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest3){
	string s = "A";
	int numRows = 1;
	Solution solution;
	string pred = solution.convert(s ,numRows);
	string real = "A";
	ASSERT_EQ(pred, real);
}

TEST(Solution, SimpleTest4){
	string s = "AB";
	int numRows = 1;
	Solution solution;
	string pred = solution.convert(s ,numRows);
	string real = "AB";
	ASSERT_EQ(pred, real);
}