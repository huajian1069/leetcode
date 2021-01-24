#include <gtest/gtest.h>
#include "last-minute-enhancements.hpp"

TEST(Solution, SimpleTest1){
	vector<int> inputs{1,2,2,2,5,6};
	ASSERT_EQ(maxDiversity(inputs), 5);
	//ASSERT_EQ(maxDiversity_greedy(inputs), 5);
}

TEST(Solution, SimpleTest2){
	vector<int> inputs{4, 4};
	ASSERT_EQ(maxDiversity(inputs), 2);
	ASSERT_EQ(maxDiversity_greedy(inputs), 2);
}

TEST(Solution, SimpleTest3){
	vector<int> inputs{1,1,3,4,4,5};
	ASSERT_EQ(maxDiversity_greedy(inputs), 6);
	ASSERT_EQ(maxDiversity(inputs), 6);
}

TEST(Solution, SimpleTest4){
	vector<int> inputs{1};
	ASSERT_EQ(maxDiversity_greedy(inputs), 1);
	ASSERT_EQ(maxDiversity(inputs), 1);
}

TEST(Solution, SimpleTest5){
	vector<int> inputs{1,1,1,2,2,2};
	ASSERT_EQ(maxDiversity_greedy(inputs), 3);
	ASSERT_EQ(maxDiversity(inputs), 3);
}
