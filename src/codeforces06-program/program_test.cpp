#include <gtest/gtest.h>
#include "program.hpp"

TEST(Solution, SimpleTest1){
	string str = "-+--+--+";
	Solution solution(str, 8);
	int pred = solution.getDistinct_improve2(1, 8);
	ASSERT_EQ(pred, 1);
}

TEST(Solution, SimpleTest2){
	string str = "-+--+--+";
	Solution solution(str, 8);
	int pred = solution.getDistinct_improve2(2, 8);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest3){
	string str = "-+--+--+";
	Solution solution(str, 8);
	int pred = solution.getDistinct_improve2(2, 5);
	ASSERT_EQ(pred, 4);
}

TEST(Solution, SimpleTest4){
	string str = "-+--+--+";
	Solution solution(str, 8);
	int pred = solution.getDistinct_improve2(1, 1);
	ASSERT_EQ(pred, 4);
}


TEST(Solution, SimpleTest5){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(1, 1);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest6){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(1, 2);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest7){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(2, 2);
	ASSERT_EQ(pred, 4);
}

TEST(Solution, SimpleTest8){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(1, 3);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest9){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(2, 3);
	ASSERT_EQ(pred, 3);
}

TEST(Solution, SimpleTest10){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(3, 3);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest11){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(1, 4);
	ASSERT_EQ(pred, 1);
}

TEST(Solution, SimpleTest12){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(2, 4);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest13){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(3, 4);
	ASSERT_EQ(pred, 2);
}

TEST(Solution, SimpleTest14){
	string str = "+-++";
	Solution solution(str, 4);
	int pred = solution.getDistinct_improve2(4, 4);
	ASSERT_EQ(pred, 2);
}