#include "next-permutation.hpp"
#include <algorithm>

void Solution::nextPermutation(vector<int>& nums) {
    int len = nums.size();
    int max = -1;
    for(int i = len-1; i > 0; i--){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i-1] < max){
        	sort(nums.begin()+i, nums.end());
        	for(int j = i; j < len; j++){
        		if(nums[j] > nums[i-1]){
        			int ex = nums[j];
        			nums[j] = nums[i-1];
        			nums[i-1] = ex;
        			break;
        		}
        	}
        	return;
        }
    }
    for(int i = 0; i < len/2; i++){
        int ex = nums[i];
        nums[i] = nums[len-1-i];
        nums[len-1-i] = ex;
    }
}