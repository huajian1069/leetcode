#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
private:
    vector<int> *short_;
    vector<int> *long_;
    int abs_short(int i);
    int abs_long(int i);
    const static int MAX = (unsigned int)(1 << 31) - 1;
    const static int MIN = (1 << 31);
};