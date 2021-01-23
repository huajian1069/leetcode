#include "string-lcm.hpp"
int main(){
	int n;
	cin >> n;
	Solution solution;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s;
		cin >> t;
		cout << solution.getStringLCM(s, t) << endl;;
	}
}