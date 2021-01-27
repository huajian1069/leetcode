#include <gtest/gtest.h>
#include "implement-strstr.hpp"

TEST(Solution, SimpleTest1){
	string str1 = "hello", str2 = "ll";
	Solution solution;
	int pred = solution.strStr(str1, str2);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest2){
	string str1 = "aaaaa", str2 = "bba";
	Solution solution;
	int pred = solution.strStr(str1, str2);
	ASSERT_EQ(pred, -1);
}

TEST(Solution, SimpleTest3){
	string str1 = "", str2 = "";
	Solution solution;
	int pred = solution.strStr(str1, str2);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest4){
	string str1 = "", str2 = "a";
	Solution solution;
	int pred = solution.strStr(str1, str2);
	ASSERT_EQ(pred, -1);
}
