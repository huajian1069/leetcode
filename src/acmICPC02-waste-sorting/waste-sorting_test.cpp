#include <gtest/gtest.h>
#include "waste-sorting.hpp"

TEST(Solution, SimpleTest1){
	int a[3] = {1, 2, 3};
	int c[5] = {1, 2, 3, 0, 0};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "YES");
}


TEST(Solution, SimpleTest2){
	int a[3] = {2, 2, 3};
	int c[5] = {1, 2, 3, 1, 0};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "YES");
}


TEST(Solution, SimpleTest3){
	int a[3] = {2, 2, 3};
	int c[5] = {1, 2, 3, 0, 1};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "NO");
}


TEST(Solution, SimpleTest4){
	int a[3] = {1, 2, 5};
	int c[5] = {1, 2, 3, 1, 1};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "YES");
}


TEST(Solution, SimpleTest5){
	int a[3] = {0, 0, 0};
	int c[5] = {0, 0, 0, 0, 0};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "YES");
}


TEST(Solution, SimpleTest6){
	int a[3] = {0, 0, 4};
	int c[5] = {1, 0, 0, 0, 0};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "NO");
}


TEST(Solution, SimpleTest7){
	int a[3] = {13, 37, 42};
	int c[5] = {0, 0, 0, 40, 47};
	Solution solution;
	string pred = solution.canFit(a, c);
	ASSERT_EQ(pred, "YES");
}
