#include "4sum.hpp"

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target){
	vector<vector<int>> res;
    if(nums.size() < 4)
    	return res;
    sort(nums.begin(), nums.end());
    for(int low = 0; low < nums.size()-3; low++){
        if(low != 0 && nums[low] == nums[low-1]) continue;
        if(nums[low] > target/4) break;
        for(int sec_low = low + 1; sec_low < nums.size()-2; sec_low++){
        	if(sec_low-1 != low && nums[sec_low] == nums[sec_low-1]) continue;
        	int high = nums.size() - 1;
	        int mid = sec_low + 1;
	        int sum = nums[low] + nums[sec_low];
	        while(mid < high){
	        	// cout << "low: "<< low << " sec_low: " << sec_low << endl;
	        	// cout << "mid: " << mid << " high: " << high << endl;
	            if(nums[mid] + nums[high] == target - sum){
	            	res.push_back(vector<int>{nums[low], nums[sec_low], nums[mid], nums[high]});
	            }
	            if(nums[mid] + nums[high] > target - sum)
	            	do{high--;} while(high > mid && nums[high] == nums[high+1]);
	            else 
	            	do{mid++;} while(mid < high && nums[mid] == nums[mid-1]);
	        }
        }
    }
    // cout << "res: " << endl;
    return res;
}