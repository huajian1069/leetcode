#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s;
        bool stop = false;
        bool same = false;
        int i = 1;
        int max_len = 0, maxL=0, maxR=0;
        int j = 0;
        while(!(i >= s.length())){
            if(same == true && s[j] == s[i]){
                ;
            } else{
                same = false;
                if(j > 0 && s[j-1] == s[i])
                    j -= 1;
                else if(s[i-1] == s[i] && j == i-1){
                    same = true;
                }
                else {
                    j = i = (i + j - 1) / 2 + 1;
                    //i = j;
                }
            }
            if(i-j+1 > max_len){
                max_len = i-j+1;
                maxL = j;
                maxR = i;
            }   
            cout << "i: " << i << " j: " << j << endl;
            i++;
            stop = i >= s.length();
        }
        return s.substr(maxL, maxR-maxL+1);
    }
};