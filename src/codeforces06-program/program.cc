#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution{
public:
	int getDistinct(string &str, int l, int r);
};

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

int main(){
	Solution solution;
	int t;
	cin >> t;
	while(t--){
		int n, m;
		string str;
		cin >> n;
		cin >> m;
		cin >> str;
		while(m--){
			int l, r;
			cin >> l;
			cin >> r;
			cout << solution.getDistinct(str, l, r) << endl;
		}
	}
}