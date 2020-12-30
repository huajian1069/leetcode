#include "roman-to-integer.hpp"

int Solution::romanToInt(string s) {
    bool stop = s.length() == 0;
    int num = 0;
    int sum = 0;
    int i = s.length()-1;
    while(!stop){
        switch(s[i]){
            case 'I': 
                num = 1;
                break;
            case 'V':
                num = 5;
                break;
            case 'X':
                num = 10;
                break;
            case 'L':
                num = 50;
                break;
            case 'C':
                num = 100;
                break;
            case 'D':
                num = 500;
                break;
            case 'M':
                num = 1000;
        }
        if(i-1 >= 0){
            if((s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I'){
                num -= 1;
                i -= 2;
            } else if((s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X'){
                num -= 10;
                i -= 2;
            } else if((s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C'){
                num -= 100;
                i -= 2;
            } else i--;
        } else i--;
        // cout << "i: " << i << ", num: " << num << endl;
        sum += num;
        stop = i < 0;
    }
    return sum;
}