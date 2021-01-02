#include "integer-to-roman.hpp"
#include "cmath"

string Solution::intToRoman(int num) {
    string roman;
    char R[5] = "IXCM";
    char F[4] = "VLD";
    for(int i = 3; i >= 0; i--){
        int bit = num / pow(10, i);
        num = num % int(pow(10, i));
        switch(bit){
            case 3: roman += R[i];
            case 2: roman += R[i];
            case 1: roman += R[i];
                break;
            case 4: roman += R[i]; 
            case 5: roman += F[i];
                break;
            case 8: roman += F[i]; roman += R[i]; roman += R[i]; roman += R[i]; 
                break;
            case 7: roman += F[i]; roman += R[i]; roman += R[i]; 
                break;
            case 6: roman += F[i]; roman += R[i];
                break;
            case 9: roman += R[i]; roman += R[i+1];
                break;        
        }
    }
    return roman;
}