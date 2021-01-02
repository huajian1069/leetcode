#include <gtest/gtest.h>
#include "integer-to-roman.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	string pred = solution.intToRoman(1994);
	ASSERT_EQ(pred, "MCMXCIV");
}

TEST(Solution, SimpleTest2){
	Solution solution;
	string pred = solution.intToRoman(3);
	ASSERT_EQ(pred, "III");
}

TEST(Solution, SimpleTest3){
	Solution solution;
	string pred = solution.intToRoman(9);
	ASSERT_EQ(pred, "IX");
}

TEST(Solution, SimpleTest4){
	Solution solution;
	string pred = solution.intToRoman(4);
	ASSERT_EQ(pred, "IV");
}

TEST(Solution, SimpleTest5){
	Solution solution;
	string pred = solution.intToRoman(58);
	ASSERT_EQ(pred, "LVIII");
}
