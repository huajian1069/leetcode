#include "search-in-rotated-sorted-array.hpp"

int Solution::search1(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target)
            return i;
    }
    return -1;
}

int Solution::search2(vector<int>& nums, int target) {
	// cout << "alive" << endl;
	int l = 0, r = nums.size()-1;
	if(target == nums.front())
		return 0;
	else if(target == nums.back())
		return r;

	while(l < r-1){
		int mid = (l + r) / 2;
		if(nums[mid] == target)
			return mid;
		// cout << "mid: " << mid << " value: " << nums[mid] << endl; 
		if (nums[mid] < nums[r]){
			if(target > nums[mid] && target < nums[r])
				l = mid;
			else r = mid;
		}
		else {
			if(target > nums[l] && target < nums[mid])
				r = mid;
			else l = mid;
		}
		// cout << "l: " << l << " r: " << r << endl;
		// if(l == 5 && r == 6) break;
	}
    return -1;
}