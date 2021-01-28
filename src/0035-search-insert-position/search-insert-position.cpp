#include "search-insert-position.hpp"

int Solution::searchInsert(vector<int>& nums, int target){
    int low = 0, high = nums.size()-1;
    int idx = -1;
    while(idx == -1){
        if(target <= nums[low])
            idx = low;
        else if(target > nums[high])
            idx = high+1;
        else{
            if(low == high-1)
                idx = low+1;
            else{
                int mid = (low + high) / 2;
                if(target > nums[mid])
                    low = mid;
                else high = mid;
            } 
        }
    }
    return idx;  
}