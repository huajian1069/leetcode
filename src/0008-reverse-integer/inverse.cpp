#include <cmath>

class Solution {
public:
    int reverse(int x) {
        //int max = 1 << 31;
        //int num_digit = max / 10;
        int max_digit = 9;
        int max_int = (1 << 31) - 1;
        int min_int = (1 << 31);
        bool flag = false;
        if (x == 0)
            return 0;
        while(x / int(pow(10, max_digit)) == 0)
            max_digit--;
        if (max_digit == 9)
            flag = true;
        int sum = 0;
        int digit = 0;
        int remain = x;
        try{
            while(max_digit > -1){
            int d = remain / int(pow(10, max_digit));
            remain = x % int(pow(10, max_digit));
            if(flag == true){
                if (x > 0 && d * pow(10, digit) > max_int - sum)
                    return 0;
                else if(x < 0 && d * pow(10, digit) < min_int - sum)
                    return 0;
            }
            sum += d * pow(10, digit);
            max_digit--;
            digit++;
            }
        }
        catch(...){
            return 0;
        }
        return sum;
    }
};

