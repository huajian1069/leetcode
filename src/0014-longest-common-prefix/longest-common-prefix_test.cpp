#include <gtest/gtest.h>
#include "longest-common-prefix.hpp"

TEST(Solution, SimpleTest1){
	vector<string> strs{"flower","flow","flight"};
	Solution solution;
	string pred = solution.longestCommonPrefix(strs);
	ASSERT_EQ(pred, "fl");
}

TEST(Solution, SimpleTest2){
	vector<string> strs{"dog","racecar","car"};
	Solution solution;
	string pred = solution.longestCommonPrefix(strs);
	ASSERT_EQ(pred, "");
}
