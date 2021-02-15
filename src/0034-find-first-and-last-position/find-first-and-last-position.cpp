#include "find-first-and-last-position.hpp"

vector<int> Solution::searchRange(vector<int>& nums, int target) {
    int start = -1, end = -1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target && start == -1) start = i;
        if(nums[i] == target && start != -1) end = i;
        if(nums[i] > target) break;
    }
    return vector{start, end};
}