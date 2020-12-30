#include <map>
#include "length-longest-substring.hpp"

int Solution::lengthOfLongestSubstring(string s) {
    map<char, int> record;
    int j = s.length();
    int i = s.length() - 1;
    int max_obj = 0;
    while(!(i < 0)){
        if(record.count(s[i]) != 0){   // update objective/performance
            j = min(j, record[s[i]]); 
        }
        max_obj = max(max_obj, j-i);  // record biggest objective
        record[s[i]] = i;             // record auxiliary variables
        i--;                // move in design space
    }
    return max_obj;
}