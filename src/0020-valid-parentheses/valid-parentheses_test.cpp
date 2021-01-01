#include <gtest/gtest.h>
#include "valid-parentheses.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	bool pred = solution.isValid("(])");
	ASSERT_EQ(pred, false);
}
