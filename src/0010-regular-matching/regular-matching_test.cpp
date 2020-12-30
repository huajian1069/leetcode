#include <gtest/gtest.h>
#include "regular-matching.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	bool pred = solution.isMatch("aa", "a");
	ASSERT_EQ(pred, false);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	bool pred = solution.isMatch("aa", "a*");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	bool pred = solution.isMatch("ab", ".*");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest4){
	Solution solution;
	bool pred = solution.isMatch("aab", "c*a*b");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest5){
	Solution solution;
	bool pred = solution.isMatch("mississippi", "mis*is*p*");
	ASSERT_EQ(pred, false);
}

TEST(Solution, SimpleTest6){
	Solution solution;
	bool pred = solution.isMatch("aaa", "a*a");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest7){
	Solution solution;
	bool pred = solution.isMatch("aaa", "ab*ac*a");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest8){
	Solution solution;
	bool pred = solution.isMatch("ab", ".*c");
	ASSERT_EQ(pred, false);
}

TEST(Solution, SimpleTest9){
	Solution solution;
	bool pred = solution.isMatch("a", "ab*");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest10){
	Solution solution;
	bool pred = solution.isMatch("b", "b.*c");
	ASSERT_EQ(pred, false);
}

TEST(Solution, SimpleTest11){
	Solution solution;
	bool pred = solution.isMatch("", "c*c*");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest12){
	Solution solution;
	bool pred = solution.isMatch("", "");
	ASSERT_EQ(pred, true);
}

TEST(Solution, SimpleTest13){
	Solution solution;
	bool pred = solution.isMatch("abbabaaaaaaacaa", "a*.*b.a.*c*b*a*c*");
	ASSERT_EQ(pred, true);
}
