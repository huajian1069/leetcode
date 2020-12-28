#include <gtest/gtest.h>
#include "roman-to-integer.cpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	int pred = solution.romanToInt("MCMXCIV");
	ASSERT_EQ(pred, 1994);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	int pred = solution.romanToInt("III");
	ASSERT_EQ(pred, 3);
}
