#include <gtest/gtest.h>
#include "letter-combinations-of-a-phone-number.hpp"

TEST(Solution, SimpleTest1){
	string in("23");
	Solution solution;
	vector<string> pred = solution.letterCombinations(in);
	vector<string> real{"ad","ae","af","bd","be","bf","cd","ce","cf"};
	ASSERT_EQ(pred, real);
}
