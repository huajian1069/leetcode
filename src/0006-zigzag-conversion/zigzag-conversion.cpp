#include "zigzag-conversion.hpp"
#include <map>

string Solution::convert(string s, int numRows) {
    if(numRows == 1)
        return s;
    bool stop = false;
    string *sub_res = new string[numRows];
    int i = 0;
    const int unit = 2 * numRows - 2;
    while(!stop){
        int idx = i % unit;
        if(idx >= numRows)
            idx = unit - idx;
        sub_res[idx] += s[i];
        i++;
        stop = i == s.length();
    }
    string res;
    for(int i = 0; i < numRows; i++)
        res += sub_res[i];
    return res;
}



