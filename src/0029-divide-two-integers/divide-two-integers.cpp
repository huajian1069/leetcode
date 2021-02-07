#include "divide-two-integers.hpp"

int Solution::divide(int dividend, int divisor) {
    if(divisor == 0)
        return (unsigned int)(1 << 31) - 1;
    if(divisor == -1 && dividend == (1 << 31))
        return (unsigned int)(1 << 31) - 1;
    if(divisor == 1)
        return dividend;
    if(divisor == -1)
        return -dividend;
    if(divisor == dividend)
        return 1;
    if(divisor == (1 << 31))
        return 0;
    
    int remain = dividend;
    int i = 0;
    if(dividend > 0 && divisor > 0){
        while(remain >= divisor){
            remain -= divisor;
            i++;
        }
    } else if(dividend < 0 && divisor < 0){
        while(remain <= divisor){
            remain -= divisor;
            i++;
        }
    } else if(dividend > 0 && divisor < 0){
        while(remain >= -divisor){
            remain += divisor;
            i--;
        }
    } else if(dividend < 0 && divisor > 0){
        while(remain <= -divisor){
            remain += divisor;
            i--;
        }
    } 
    return i;
}

int Solution::divide2(int dividend, int divisor) {
    if(divisor == 0)
        return (unsigned int)(1 << 31) - 1;
    if(divisor == -1 && dividend == (1 << 31))
        return (unsigned int)(1 << 31) - 1;
    
    if(divisor == 1)
        return dividend;
    if(divisor == -1)
        return -dividend;
    if(divisor == dividend)
        return 1;
    if(divisor == (1 << 31))
        return 0;
    
    bool isNeg = false;
    if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
        isNeg = true;
    long int absDvd = abs(dividend); 
    long int absDvs = abs(divisor);
    long int cur = absDvs, remain = absDvd;
    int ans = 0;
    while(remain > cur){
        int j = 0, i = 1;
        while(cur << 1 <= remain){
            cur = cur << 1;
            j++;
            i = 1 << j;
        }
        remain -= cur; 
        cur =  absDvs;
        ans += i;
    }
    if(isNeg) return ~ans + 1;
    else return ans;
}
