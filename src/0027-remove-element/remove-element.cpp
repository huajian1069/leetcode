#include "remove-element.hpp"

int Solution::removeElement(vector<int>& nums, int val) {
    int i = 0, j;
    int size = nums.size();
    if(size == 0)
        return 0;
    while(i < size && nums[i] != val) i++;
    j = i + 1;
    while(j < size){
        if(nums[j] != val && j != i){
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
}