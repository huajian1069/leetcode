#include "implement-strstr.hpp"

int Solution::strStr(string haystack, string needle) {
	int diff = haystack.length()-needle.length();
	// cout << "str1: " << haystack.length() << " str2: " << needle.length() << " diff: " << diff << endl;
    for(int i = 0; i <= diff; i++){
    	bool match = true;
    	for(int j = 0; j < needle.length(); j++){
        	if(haystack[i+j] != needle[j]){
            	match = false;
            	break;
        	}
    	}
    	if(match)
        	return i;
    }
    return -1;
}