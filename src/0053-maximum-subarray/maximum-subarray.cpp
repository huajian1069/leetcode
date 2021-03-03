#include "maximum-subarray.hpp"

int Solution::maxSubArray(vector<int>& nums) {
    int sum = 0, max = -100000;
    for(int i = 1; i < nums.size()+1; i++){
        sum += nums[i-1]; 
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;
    }
    return max;
}

