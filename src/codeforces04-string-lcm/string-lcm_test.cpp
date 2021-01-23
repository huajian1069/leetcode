#include <gtest/gtest.h>
#include "string-lcm.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	string s = "baba";
	string t = "ba";
	string pred = solution.getStringLCM(s, t);
	ASSERT_EQ(pred, "baba");
}

TEST(Solution, SimpleTest2){
	Solution solution;
	string s = "aa";
	string t = "aaa";
	string pred = solution.getStringLCM(s, t);
	ASSERT_EQ(pred, "aaaaaa");
}

TEST(Solution, SimpleTest3){
	Solution solution;
	string s = "aba";
	string t = "ab";
	string pred = solution.getStringLCM(s, t);
	ASSERT_EQ(pred, "-1");
}

TEST(Solution, SimpleTest4){
	Solution solution;
	string s = "bbabbbab";
	string t = "bbabbbabbbabbbabbbab";
	string pred = solution.getStringLCM(s, t);
	ASSERT_EQ(pred, "bbabbbabbbabbbabbbabbbabbbabbbabbbabbbab");
}



