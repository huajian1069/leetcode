#include "pow.hpp"

double Solution::myPow(double x, int n) {
    if(x == 1)
        return 1;
    if(x == -1){
        if(n % 2) return -1;
        else return 1;
    }
    if(x == 0){
        if(n != 0) return 0;
        else return 1;
    }
    long int absN = abs(n);
    double res = 1;
    while(absN > 0){
        double s = x;
        long int i = 1;
        while(2*i <= absN){
            s = s * s;     
            i *= 2;
        }
        res *= s;
        absN -= i;
    }
    if(n < 0)
        return 1 / res;
    else return res;
}
