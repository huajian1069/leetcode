#include <gtest/gtest.h>
#include "replacing-elements.hpp"

TEST(Solution, SimpleTest1){
	int a[5]{2, 3, 2, 5, 4};
	ASSERT_EQ(isPoss(a, 3, 5), "NO");
}

TEST(Solution, SimpleTest2){
	int a[3]{2, 4, 4};
	ASSERT_EQ(isPoss(a, 4, 3), "YES");
}

TEST(Solution, SimpleTest3){
	int a[5]{2, 1, 5, 3, 6};
	ASSERT_EQ(isPoss(a, 4, 5), "YES");
}