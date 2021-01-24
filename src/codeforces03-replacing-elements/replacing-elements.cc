#include "replacing-elements.hpp"

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n, d;
		cin >> n;
		cin >> d;
		int a[n];
		for(int j = 0; j < n; j++){
			cin >> a[j];		
		}
		cout << isPoss(a, d, n) << endl;
	}
}