#include <gtest/gtest.h>
#include "generate-parentheses.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	vector<string> pred = solution.generateParenthesis(3);
	vector<string> real{"()()()", "(())()", "((()))", "()(())", "(()())"};
	ASSERT_EQ(pred, real);
}
