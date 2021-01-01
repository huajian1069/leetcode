#include "valid-parentheses.hpp"
#include <stack>

bool Solution::isValid(string s) {
    stack<char> par;
    int i = 0;
    bool valid = true;
    while(i < s.length() && valid){
        switch(s[i]){
            case '(':
            case '{':
            case '[':
                par.push(s[i]);
                break;
            case ')':
                if(par.empty())
                    valid = false;
                else{
                	if(par.top() == '(')
                    	par.pop();
                	else valid = false;
                }
                break;
            case '}':
                if(par.empty())
                    valid = false;
                else{
                	if(par.top() == '{')
                    	par.pop();
                	else valid = false;
                }
                break;
            case ']':
                if(par.empty())
                    valid = false;
                else{
                	if(par.top() == '[')
                    	par.pop();
                    else valid = false;
                }
        }
        i++;
    }
    if(par.empty() && valid)
        return true;
    else return false;
}