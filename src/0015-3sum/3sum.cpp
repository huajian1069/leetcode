#include "3sum.hpp"


vector<vector<int>> Solution::threeSum(vector<int>& nums){
    unordered_set<int> knownHead;
    vector<vector<int>> res;
    unordered_map<int, int> valueIdx;
    for(int i = 0; i < nums.size(); i++)
        valueIdx[nums[i]] = i;
    for(int i = 0; i < nums.size(); i++){
        cout << " i: " << i << " ; " << nums[i] << endl;
        if(knownHead.count(nums[i]) != 0)
            continue;
        auto i_set = twoSum(nums, valueIdx, knownHead, -nums[i], i);
        res.insert(res.end(), i_set.begin(), i_set.end());
        knownHead.insert(nums[i]);
        for(auto d = i_set.begin(); d != i_set.end(); d ++){
            for(auto dd = d->begin(); dd != d->end(); dd++){
                cout << *dd << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return res;
}

vector<vector<int>> Solution::twoSum(vector<int>& nums, unordered_map<int, int>& valueIdx, 
                        unordered_set<int>& knownHead, int target, int idx){
    //unordered_set<int> diffs;
    //unordered_set<int> knownHead;
    vector<vector<int>> res;
    for(int i = idx+1; i < nums.size()-1; i++){
       // diffs.insert(nums[i]); // save evaluated objective/performance
        cout << "nums i+1: " << nums[i] << endl;
        if(valueIdx.count(target - nums[i]) != 0){ // evaluate objective/performance
            if(valueIdx[target - nums[i]] > i){
                if(knownHead.count(target - nums[i]) == 0 && knownHead.count(nums[i]) == 0){
                    //cout << "valueIdx: " << valueIdx[target - nums[i]] << ", num: " << target - nums[i] << endl;
                    vector<int> v{-target, nums[i], target - nums[i]};
                    sort(v.begin(), v.end());
                    res.push_back(v);
                }
            }
        }
         // move in design space
    }
    // for(auto dd = diffs.begin(); dd != diffs.end(); dd++){
    //     cout << *dd << "\t";
    // }
    cout << endl;
    return res;
}