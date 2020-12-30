#include <gtest/gtest.h>
#include "container-with-most-water.hpp"

TEST(Solution, SimpleTest1){
	vector<int> height(20000);
	int x = 0;
	std::generate(height.begin(), height.begin()+10000, [&]{ return x++; }); 
	std::generate(height.begin()+10000, height.begin()+20000, [&]{ return x--; }); 
	Solution solution;
	int pred = solution.maxArea(height);
	ASSERT_EQ(pred, 50000000);
}

TEST(Solution, SimpleTest2){
	vector<int> height{1,8,6,2,5,4,8,3,7};
	Solution solution;
	int pred = solution.maxArea(height);
	ASSERT_EQ(pred, 49);
}
