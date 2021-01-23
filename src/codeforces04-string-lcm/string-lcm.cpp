#include "string-lcm.hpp"

string Solution::getStringLCM(string s, string t){
	int j = 0;
	string coms, comt;
	int lens = s.length();
	int lent = t.length();
	coms += s[0];
	for(int k = 1; k < lens; k++){
		if(coms[j] == s[k])
			j = (j + 1) % coms.length();
		else{
			k = coms.length();
			coms += s[coms.length()];
			j = 0;
		}
		// cout << "k: " << k << " coms: " << coms << endl;
	}
	// cout << "j: " << j << endl;
	if(j != 0) coms = s;
	j = 0;
	comt += t[0];
	for(int k = 1; k < lent; k++){
		if(comt[j] == t[k])
			j = (j + 1) % comt.length();
		else{
			k = comt.length();
			comt += t[comt.length()];
			j = 0;
		}
	}
	// cout << "j: " << j << endl;
	if(j != 0) comt = t;
	// cout << "coms: " << coms << endl;
	// cout << "comt: " << comt << endl;
	string ans;
	if(comt == coms){
		int nums = s.length() / comt.length();
		int numt = t.length() / coms.length();
		// cout << "nums: " << nums << endl;
		// cout << "numt: " << numt << endl;
		int num = lcm(nums, numt);
		while(num--) ans += coms;
	} else ans = "-1";
	return ans;
}