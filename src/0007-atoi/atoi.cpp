#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
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
        while(new_s[i] <= '9' && new_s[i] >= '0'){
            int dit = (int(new_s[i]) - 48);
            if(ans > imax/10 || (ans==imax/10 && dit>7))
                return imax;
            if(ans < imin/10 || (ans==imin/10 && dit>8))
                return imin;
            ans = ans * 10 + pos*dit;
            i++;
        }
        return ans;
    }
};