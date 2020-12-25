#include <gtest/gtest.h>
#include "palindrome-number.cpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	bool pred = solution.isPalindrome(121);
	ASSERT_EQ(true, pred);
}
