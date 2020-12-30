#include <gtest/gtest.h>
#include "b-spiral-printing.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;	
	vector<int> real{1,2,3,8,9,4,7,6,5};
	auto pred = solution.spiralPrinting(3, 3);
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest2){
	Solution solution;	
	vector<int> real{1,2,3,4,5,14,15,16,17,6,13,20,19,18,7,12,11,10,9,8};
	auto pred = solution.spiralPrinting(4, 5);
	ASSERT_EQ(real, pred);
}
