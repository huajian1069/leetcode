#include <gtest/gtest.h>
#include "palindrome-number.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	bool pred = solution.isPalindrome(121);
	ASSERT_EQ(true, pred);
}
