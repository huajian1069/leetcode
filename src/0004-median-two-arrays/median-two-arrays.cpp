#include "median-two-arrays.hpp"

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()){
        short_ = &nums2;
        long_ = &nums1;
    } else {
        short_ = &nums1;
        long_ = &nums2;
    }
    int i = (*short_).size() / 2;
    const int halfL = (nums1.size() + nums2.size()+ 1) / 2;
    int j;
    bool stop = false;
    while(!stop){
        if (abs_short(i-1) > abs_long(j)) // evaluate objective/performance
            i--;        // move in design space, update design parameter
        else if (abs_long(j-1) > abs_short(i))
            i++;        // move in design space
        j = halfL - i;  // move in design space,  update design parameter
        stop = (abs_short(i-1) <= abs_long(j)) && (abs_long(j-1) <= abs_short(i)); // evaluate stopping criterion
    }
    if((nums1.size() + nums2.size()) % 2)
        return max(abs_short(i-1), abs_long(j-1));
    else
        return (max(abs_short(i-1), abs_long(j-1)) + min(abs_short(i), abs_long(j)))/2.0;
}
int Solution::abs_short(int i){
    if(i >= (int)(*short_).size())
        return MAX;
    else if(i < 0)
        return MIN;
    else
        return (*short_)[i];
}
int Solution::abs_long(int i){
    if(i >= (int)(*long_).size())
        return MAX;
    else if(i < 0)
        return MIN;
    else
        return (*long_)[i];
}