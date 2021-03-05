#include "length-of-last-word.hpp"

int Solution::lengthOfLastWord(string s) {
    int j = 0;
    if( s.length() != 0 && s[0] != ' ') j = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == ' ' && s[i] != ' ') j = 1;
        else if(s[i] != ' ') j++;
    }
    return j;
}