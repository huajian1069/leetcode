#include <limits>
#include "atoi.hpp"

int Solution::myAtoi(string s) {
    int i = -1;
    while(s[++i] == ' ');
    s = s.substr(i, s.length()-i);
    string &new_s = s;
    int pos = 1;
    if(new_s[0] == '+'){
        pos = 1;
        new_s = new_s.substr(1, new_s.length()-1);
    }
    else if(new_s[0] == '-') {
        pos = -1;
        new_s = new_s.substr(1, new_s.length()-1);
    }
    i = 0;
    int ans = 0;
    int imin = std::numeric_limits<int>::min(); // minimum value
	int imax = std::numeric_limits<int>::max(); // maximum value (2147483647)
    bool stop = new_s[i] > '9' || new_s[i] < '0';
    while(!stop){
        int dit = (int(new_s[i]) - 48);   // evaluate objective/performance
        if(ans==imax/10 && dit>7)       // check stop criterion
            return imax;
        if(ans==imin/10 && dit>8)       // check stop criterion
            return imin;
        ans = ans * 10 + pos*dit;        // evaluate objective       
        i++;
        stop = new_s[i] > '9' || new_s[i] < '0';  // check stop criterion
    }
    return ans;
}