#include <gtest/gtest.h>
#include "length-of-last-word.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	int pred = solution.lengthOfLastWord("Hello world");
	ASSERT_EQ(pred, 5);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	int pred = solution.lengthOfLastWord("H ");
	ASSERT_EQ(pred, 1);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	int pred = solution.lengthOfLastWord(" ");
	ASSERT_EQ(pred, 0);
}
