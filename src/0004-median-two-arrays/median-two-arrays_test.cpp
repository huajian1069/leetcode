#include <gtest/gtest.h>
#include "median-two-arrays.cpp"

TEST(Solution, SimpleTest1){
	vector<int> nums1{0, 2, 3, 10};
	vector<int> nums2{12, 34, 37, 56, 89};
	Solution solution;
	double pred = solution.findMedianSortedArrays(nums1, nums2);
	double real = 12.0;
	ASSERT_LE(pred-real, 0.001);
	ASSERT_LE(real-pred, 0.001);
}

TEST(Solution, SimpleTest2){
	vector<int> nums1{1, 2};
	vector<int> nums2{3, 4};
	Solution solution;
	double pred = solution.findMedianSortedArrays(nums1, nums2);
	double real = 2.5;
	ASSERT_LE(pred-real, 0.001);
	ASSERT_LE(real-pred, 0.001);
}

TEST(Solution, SimpleTest3){
	vector<int> nums1{100001};
	vector<int> nums2{100000};
	Solution solution;
	double pred = solution.findMedianSortedArrays(nums1, nums2);
	double real = 100000.5;
	ASSERT_LE(pred-real, 0.001);
	ASSERT_LE(real-pred, 0.001);
}