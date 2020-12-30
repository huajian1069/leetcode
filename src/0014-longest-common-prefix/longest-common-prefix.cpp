#include "longest-common-prefix.hpp"
//class Solution {
//public:
string Solution::longestCommonPrefix(vector<string>& strs) {
    if(strs.empty())
        return string("");
    int i = 0;
    while(1){
        bool same = true;
        for(auto s: strs){
            if(s.length() <= i){
                same = false;
                break;   
            }
            same = same && (strs[0][i] == s[i]);   
            if(!same)
                break;
        }
        if(same)
            i++;
        else break;
    }
    return strs[0].substr(0, i);
}
//};