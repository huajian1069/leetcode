#include <iostream>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        // initialise the memory for DP
        if(mem == nullptr){
            mem = new char*[s.length()+1];
            for (int i = 0; i <= s.length(); i++){
                mem[i] = new char[p.length()+1];
                for(int j = 0; j <= p.length(); j++)
                    mem[i][j] = 'x';
            }
        }
        // if the solution for the parameter is revisited, return the memorized result 
        if(mem[s.length()][p.length()] != 'x')
            return mem[s.length()][p.length()];

        // transfer the solution to the solution for another parameter
        bool match;
        int i = 0;
    	if(p.length() > 1 && p[1] == '*'){
            match = isMatch(s, p.substr(2, p.length()-2));
    		while(!match && i < s.length() && (s[i] == p[0] || p[0] == '.')){
    			i++;
                match = isMatch(s.substr(i, s.length()-i), p);
    		}
    	} else if(0 == s.length() || 0 == p.length())
            match = 0 == s.length() && 0 == p.length();
        else if(s[0] == p[0] || p[0] == '.'){
            match = isMatch(s.substr(1, s.length()-1), p.substr(1, p.length()-1));
        } else match = false;

        // memeorize the solution for current parameter before return
        mem[s.length()][p.length()] = match;
        return match;
    }
private:
    char **mem = nullptr;
};