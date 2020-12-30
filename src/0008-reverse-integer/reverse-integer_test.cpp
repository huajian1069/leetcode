#include <gtest/gtest.h>
#include "reverse-integer.hpp"
using namespace std;

TEST(Solution, SimpleTest){
	Solution solution;
	int org = 1232;
	int inv = solution.reverse(org);
	int inv_true = 2321;
	bool res1 = (inv == inv_true);
	ASSERT_TRUE(res1);
}