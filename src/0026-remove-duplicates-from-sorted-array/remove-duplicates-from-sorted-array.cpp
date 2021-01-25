#include "remove-duplicates-from-sorted-array.hpp"

int Solution::removeDuplicates(vector<int>& nums){
    if(!nums.size())
        return 0;
    int pre = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[pre]){
            if(pre != i - 1){
                nums[pre + 1] = nums[i];
            }
            pre++;
        }
    }
    return pre+1;
}