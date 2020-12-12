#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> diffs;
        for (int j = 0; j < nums.size(); j++){
            if (diffs.count(nums[j]) != 0){
                ans.push_back(diffs.at(nums[j]));
                ans.push_back(j);
                break;
            }
            diffs[target - nums[j]] = j;
        }
        return ans;
    }

};