#include "program.hpp"

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		string str;
		cin >> n;
		cin >> m;
		cin >> str;
		Solution solution(str, n);
		while(m--){
			int l, r;
			cin >> l >> r;
			cout << solution.getDistinct_improve2(l, r) << endl;
		}
	}
}