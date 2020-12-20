#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
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
private:
    vector<int> *short_;
    vector<int> *long_;
    int abs_short(int i){
        if(i >= (int)(*short_).size())
            return (1 << 31) - 1;
        else if(i < 0)
            return (1 << 31);
        else
            return (*short_)[i];
    }
    int abs_long(int i){
        if(i >= (int)(*long_).size())
            return (1 << 31) - 1;
        else if(i < 0)
            return (1 << 31);
        else
            return (*long_)[i];
    }
};