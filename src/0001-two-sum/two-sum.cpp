#include "two-sum.hpp"
#include <unordered_map>

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> diffs;
    int i = 0;
    bool stop = false;
    while(!stop){
        diffs[target - nums[i]] = i; // save evaluated objective/performance
        i++;  // move in design space
        stop = diffs.count(nums[i]); // evaluate objective/performance
    }
    return vector<int>{diffs[nums[i]], i};
}