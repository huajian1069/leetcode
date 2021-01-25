#include <gtest/gtest.h>
#include "remove-duplicates-from-sorted-array.hpp"

TEST(Solution, SimpleTest1){
	vector<int> in{1,1,2};
	Solution solution;
	int pred = solution.removeDuplicates(in);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest2){
	vector<int> in{0,0,1,1,1,2,2,3,3,4};
	Solution solution;
	int pred = solution.removeDuplicates(in);
	ASSERT_EQ(pred, 5);
}
