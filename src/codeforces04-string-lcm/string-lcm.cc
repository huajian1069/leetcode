// #include "string-lcm.hpp"
#include <iostream>
#include <string>
#include <numeric>

using namespace std;

class Solution{
public:
	string getStringLCM(string s, string t);
	string getStringLCM2(string s, string t);
};

string Solution::getStringLCM2(string s, string t){
	int num = lcm(s.length(), t.length());
	int numS = num / s.length();
	int numT = num / t.length();
	string ansS, ansT;
	while(numS--) ansS += s;
	while(numT--) ansT += t;
	if(ansS == ansT) return ansS;
	else return "-1";
}

int main(){
	int n;
	cin >> n;
	Solution solution;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s;
		cin >> t;
		cout << solution.getStringLCM2(s, t) << endl;;
	}
}