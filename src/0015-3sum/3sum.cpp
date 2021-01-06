#include "3sum.hpp"
#include <set>
#include <tuple>
typedef std::tuple<int, int, int> KeyTriple;

vector<vector<int>> Solution::threeSum(vector<int>& nums){
    set<set<int>> kset;
    vector<vector<int>> res;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++)
                if(nums[i] + nums[k] + nums[j] == 0){
                	if(kset.count(set{nums[i], nums[j], nums[k]}) == 0){
    		            kset.insert(set{nums[i], nums[j], nums[k]});
    		            // cout << "count: " << kset.count(set{nums[i], nums[j], nums[k]}) << endl;
                    	res.push_back(vector<int>{nums[i], nums[j], nums[k]});
                	}
                }
        }
    }
    return res;
}