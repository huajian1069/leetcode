#include <gtest/gtest.h>
#include "count-and-say.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	string pred = solution.countAndSay(1);
	ASSERT_EQ(pred, "1");
}

TEST(Solution, SimpleTest2){
	Solution solution;
	string pred = solution.countAndSay(2);
	ASSERT_EQ(pred, "11");
}

TEST(Solution, SimpleTest3){
	Solution solution;
	string pred = solution.countAndSay(3);
	ASSERT_EQ(pred, "21");
}

TEST(Solution, SimpleTest4){
	Solution solution;
	string pred = solution.countAndSay(4);
	ASSERT_EQ(pred, "1211");
}
