#include "letter-combinations-of-a-phone-number.hpp"

vector<string> Solution::letterCombinations(string digits){
    vector<string> ans;
    if(digits.length() == 0)
        return ans;
    switch(digits[0]){
        case '7':
            for(int i = 0; i < 4; i++){
                if(digits.length() == 1)
                    ans.push_back(string(1, (char)(112 + i)));
                else{
                    for(string sub : letterCombinations(digits.substr(1, digits.length()-1)))
                    ans.push_back(string(1, (char)(112 + i)) + sub);
                }
            }
            break;
        case '9':
            for(int i = 0; i < 4; i++){
                if(digits.length() == 1)
                    ans.push_back(string(1, (char)(119 + i)));
                else{
                    for(string sub : letterCombinations(digits.substr(1, digits.length()-1)))
                    ans.push_back(string(1, (char)(119 + i)) + sub);
                }
            }
            break;
        case '8':
            for(int i = 0; i < 3; i++){
                if(digits.length() == 1)
                    ans.push_back(string(1, (char)(116 + i)));
                else{
                    for(string sub : letterCombinations(digits.substr(1, digits.length()-1)))
                    ans.push_back(string(1, (char)(116 + i)) + sub);
                }
            }
            break;
        default:
            for(int i = 0; i < 3; i++){
                if(digits.length() == 1)
                    ans.push_back(string(1, (char)(97 + i + (digits[0]-'2') * 3)));
                else{
                    for(string sub : letterCombinations(digits.substr(1, digits.length()-1))){
                    ans.push_back(string(1, (char)(97 + i + (digits[0]-'2') * 3)) + sub);
                    //cout << "inner: " <<  ans.back() << endl;
                    }

                }
                //cout << "first_ " << digits[0] << endl;
                //cout << string(1, (char)(97 + i + (digits[0]-'2') * 3)) << endl;
            }
    }
    return ans;
}
