#include <cmath>
#include "reverse-integer.hpp"
int Solution::reverse(int x) {
    //int max = 1 << 31;
    //int num_digit = max / 10;
    int max_digit = 9;
    int max_int = (unsigned int)(1 << 31) - 1;
    int min_int = (1 << 31);
    bool flag = false;
    if (x == 0)
        return 0;
    while(x / int(pow(10, max_digit)) == 0)
        max_digit--;
    if (max_digit == 9)
        flag = true;
    int sum = 0;
    int i = 0;
    int remain = x;
    bool stop = i > max_digit;
    while(!stop){
        int d = remain / int(pow(10, max_digit-i));
        remain = x % int(pow(10, max_digit-i));
        if(flag == true){
            if (x > 0 && d * pow(10, i) > max_int - sum)
                return 0;
            else if(x < 0 && d * pow(10, i) < min_int - sum)
                return 0;
        }
        sum += d * pow(10, i);
        i++;
        stop = i > max_digit;
    }
    return sum;
}
