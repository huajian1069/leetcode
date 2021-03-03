#include "combination-sum2.hpp"
#include <algorithm>

vector<vector<int>> Solution::combinationSum2(vector<int>& candidates, int target) {
    if(min == 200)
        for(int c : candidates){  
            if(c < min)
                min = c;                    
        }
    if(target < min)
        return vector<vector<int>>{};
    vector<vector<int>> res;
    if(count(candidates.begin(), candidates.end(), target) != 0)
        res.push_back(vector<int>{target});
    for(int i = 0; i < candidates.size(); i++){
    	int c = candidates[0];
        candidates.erase(candidates.begin());
        vector<vector<int>> r = combinationSum2(candidates, target-c);
        if(r.size() != 0){
            for(vector<int> sub : r){
                sub.push_back(c);
                sort(sub.begin(), sub.end());
                if(count(res.begin(), res.end(), sub) == 0)
                    res.push_back(sub);
            }
        }
    	candidates.push_back(c);
    }
    return res;
}

