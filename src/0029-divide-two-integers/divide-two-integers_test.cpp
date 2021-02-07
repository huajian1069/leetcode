#include <gtest/gtest.h>
#include "divide-two-integers.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	int pred = solution.divide(10, 3);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest2){
	Solution solution;
	int pred = solution.divide(10, -3);
	ASSERT_EQ(pred, -3);
}

TEST(Solution, SimpleTest3){
	Solution solution;
	int pred = solution.divide(3, -10);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest4){
	Solution solution;
	int pred = solution.divide2(3, 10);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest5){
	Solution solution;
	int pred = solution.divide2(7, -3);
	ASSERT_EQ(pred, -2);
}

TEST(Solution, SimpleTest6){
	Solution solution;
	int pred = solution.divide2(0, 1);
	ASSERT_EQ(pred, 0);
}

TEST(Solution, SimpleTest7){
	Solution solution;
	int pred = solution.divide2(1, 1);
	ASSERT_EQ(pred, 1);
}


