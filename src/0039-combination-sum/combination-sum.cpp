#include "combination-sum.hpp"
#include <algorithm>
vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target) {
    if(cand.size() == 0)
        for(int c : candidates){
            cand.insert(c);     
            if(c < min)
                min = c;                    
        }
    if(target < min)
        return vector<vector<int>>{};
    vector<vector<int>> res;
    if(cand.count(target) == 1)
        res.push_back(vector<int>{target});
    for(int c : candidates){
        vector<vector<int>> r = combinationSum(candidates, target-c);
        if(r.size() != 0){
            for(vector<int> sub : r){
                sub.push_back(c);
                sort(sub.begin(), sub.end());
                if(count(res.begin(), res.end(), sub) == 0)
                    res.push_back(sub);
            }
        }
    }
    return res;
}