#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> diffs;
        int i = 0;
        bool stop = false;
        while(!stop){
            diffs[target - nums[i]] = i;
            i++;
            stop = diffs.count(nums[i]);
        }
        return vector<int>{diffs[nums[i]], i};
    }

};