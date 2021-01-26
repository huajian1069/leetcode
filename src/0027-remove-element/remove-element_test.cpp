#include <gtest/gtest.h>
#include "remove-element.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{3,2,2,3};
	Solution solution;
	int pred = solution.removeElement(in, 3);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest2){
	vector<int> in{0,1,2,2,3,0,4,2};
	Solution solution;
	int pred = solution.removeElement(in, 2);
	ASSERT_EQ(pred, 5);
}