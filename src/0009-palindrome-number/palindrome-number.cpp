#include <iostream>
#include <limits.h>
using namespace std;


class Solution{
public:
	bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int inv = 0;
        int rem = x;
        bool stop = false;
        int sub_mx = ((unsigned int)(1 << 31) - 1) / 10;
        while(!stop){
            if(inv >= sub_mx)
                return false;
            inv = inv * 10 + rem % 10; 
            rem /= 10;
            stop = rem == 0;
        }
        cout << "submax: " << sub_mx << " max: " << INT_MAX << endl;
        cout << inv << endl;
        return inv == x;
    }
};