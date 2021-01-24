#include <gtest/gtest.h>
#include "bovine-dilemma.hpp"

TEST(Solution, SimpleTest1){
	//Solution solution;
	vector<int> trees{1, 2, 4, 5};
	ASSERT_EQ(diffArea(trees), 4);
}


TEST(Solution, SimpleTest2){
	//Solution solution;
	vector<int> trees{1, 3, 5};
	ASSERT_EQ(diffArea(trees), 2);
}