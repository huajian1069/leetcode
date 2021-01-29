#include "no-more-inversions.hpp"

int main(){
	int n;
	cin >> n;
	Solution solution;
	for(int i = 0; i < n; i++){
		int n, k;
		cin >> n;
		cin >> k;
		vector<int> out = solution.getPermutation(n, k);
		for(int idx : out)
			cout << idx << " ";
		cout << endl;
	}
}