#include <gtest/gtest.h>
#include "length-longest-substring.cpp"

TEST(Solution, SimpleTest){
	Solution solution;
	string s("abcabcbb");
	int pred = solution.lengthOfLongestSubstring(s);
	int real = 3;
	ASSERT_EQ(real, pred);
}