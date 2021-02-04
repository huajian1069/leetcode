#include "count-and-say.hpp"

string Solution::countAndSay(int n){
    if(n == 1)
        return "1";
    string ans = countAndSay(n-1);
    char prev = ans[0];
    int cnt=1;
    string res;
    for(int i = 1; i < ans.length(); i++){
        if(ans[i] == prev)
            cnt++;
        else{
            res += to_string(cnt);
            res += prev;
            cnt = 1;
            prev = ans[i];
        }
    }
    res += to_string(cnt);
    res += prev;
    return res;
}