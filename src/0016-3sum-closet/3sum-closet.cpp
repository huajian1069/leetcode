#include "3sum-closet.hpp"

int Solution::threeSumClosest(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int closet = 1000, sum;
    for(int low = 0; low < nums.size()-2; low++){
        if(low != 0 && nums[low] == nums[low-1]) continue;
        int high = nums.size() - 1;
        int mid = low + 1;
        int tar = target - nums[low];
        while(mid < high){
            if(abs(tar - (nums[mid] + nums[high])) < closet){
                closet = abs(tar - (nums[mid] + nums[high]));
                sum = nums[low] + nums[mid] + nums[high];  
                //cout << "sum: " << sum << ",  closet: " << closet << endl; 
            }
            if(tar < nums[mid] + nums[high])
            	do{high--;} while(high > mid && nums[high] == nums[high+1]);
            else 
            	do{mid++;} while(mid < high && nums[mid] == nums[mid-1]);
        }
    }
    return sum;
}