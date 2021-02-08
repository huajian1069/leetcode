#include <gtest/gtest.h>
#include "length-longest-substring.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	string s("abcabcbb");
	int pred = solution.lengthOfLongestSubstring2(s);
	int real = 3;
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	string s("absds");
	int pred = solution.lengthOfLongestSubstring2(s);
	int real = 4;
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	string s("absdc");
	int pred = solution.lengthOfLongestSubstring2(s);
	int real = 5;
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest4){
	Solution solution;
	string s("abcabcbb");
	int pred = solution.lengthOfLongestSubstring(s);
	int real = 3;
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest5){
	Solution solution;
	string s("absds");
	int pred = solution.lengthOfLongestSubstring(s);
	int real = 4;
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest6){
	Solution solution;
	string s("absdc");
	int pred = solution.lengthOfLongestSubstring(s);
	int real = 5;
	ASSERT_EQ(real, pred);
}