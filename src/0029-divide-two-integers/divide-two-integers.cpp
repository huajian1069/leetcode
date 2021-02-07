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
