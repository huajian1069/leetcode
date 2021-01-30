#include "program.hpp"
#include <set>

int Solution::getDistinct(string &str, int l, int r){
	string sub = str.substr(0, l-1) + str.substr(r, str.length()-r);
	set<int> dis{0};
	int pos = 0;
	for(char c : sub){
		if(c == '-')
			dis.insert(--pos);
		else
			dis.insert(++pos);
	}
	return dis.size();
}