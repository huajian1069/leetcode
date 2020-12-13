#include <gtest/gtest.h>
#include "length-longest-substring.cpp"

TEST(Solution, SimpleTest){
	Solution solution;
	string s("abcb");
	int pred = solution.lengthOfLongestSubstring(s);
	int real = 3;
	cout << pred;
	ASSERT_EQ(real, pred);
}