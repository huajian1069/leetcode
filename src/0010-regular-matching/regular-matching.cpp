#include <iostream>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
    	// cout << "s: " << s << endl;
    	// cout << "p: " << p << endl;
        bool stop = false, match = true;
        int i = 0, j = 0;
    	if(j + 1 < p.length() && p[j+1] == '*'){
    		j += 2;
            if(j < p.length()){
                if(i == s.length())
                    match = isMatch("", p.substr(j, p.length()-j));
                else
                    match = isMatch(s.substr(i, s.length()-i), p.substr(j, p.length()-j));
            }
    		else  match = i == s.length();
    		while(!match && i < s.length() && (s[i] == p[j-2] || p[j-2] == '.')){
    			i++;
                if(j < p.length()){
                    if(i == s.length())
                        match = isMatch("", p.substr(j, p.length()-j));
                    else
                        match = isMatch(s.substr(i, s.length()-i), p.substr(j, p.length()-j));
                }
                else  match = i == s.length();
    		}
    		return match;
    	}
        if(i == s.length() || j == p.length())
            match = i == s.length() && j == p.length();
        else if(s[i] == p[j] || p[j] == '.'){
            i += 1;
            j += 1;
            if(j < p.length()){
                if(i == s.length())
                    match = isMatch("", p.substr(j, p.length()-j));
                else
                    match = isMatch(s.substr(i, s.length()-i), p.substr(j, p.length()-j));
            }
            else  match = i == s.length();
        } else match = false;
            // cout << "middle j: " << j << endl;
       		// cout << "middle i: " << i << endl;
        	// cout << "middle match: " << match << endl;  
        // cout << "j: " << j << endl;
        // cout << "i: " << i << endl;
        // cout << "match: " << match << endl;    
        return match;
    }
};