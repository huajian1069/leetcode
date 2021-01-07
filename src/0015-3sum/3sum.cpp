#include "3sum.hpp"


vector<vector<int>> Solution::threeSum(vector<int>& nums){
    set<vector<int>> kset;
    vector<vector<int>> res;
    for(int i = 0; i < nums.size(); i++){
        cout << " i: " << i << " ; " << nums[i] << endl;
        auto i_set = twoSum(nums, -nums[i], i);
        kset.insert(i_set.begin(), i_set.end());
        for(auto d = i_set.begin(); d != i_set.end(); d ++){
            for(auto dd = d->begin(); dd != d->end(); dd++){
                cout << *dd << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    for(auto s : kset){
        vector<int> v(s.begin(), s.end());
        res.push_back(v);
    }
    return res;
}

set<vector<int>> Solution::twoSum(vector<int>& nums, int target, int idx){
    unordered_set<int> diffs;
    set<vector<int>> res;
    for(int i = idx+1; i < nums.size()-1; i++){
        diffs.insert(nums[i]); // save evaluated objective/performance
        cout << "nums i+1: " << nums[i+1] << endl;
        if(diffs.count(target - nums[i+1]) != 0){ // evaluate objective/performance
            vector<int> v{-target, nums[i+1], target - nums[i+1]};
            sort(v.begin(), v.end());
            res.insert(v);
        }
         // move in design space
    }
    // for(auto dd = diffs.begin(); dd != diffs.end(); dd++){
    //     cout << *dd << "\t";
    // }
    cout << endl;
    return res;
}