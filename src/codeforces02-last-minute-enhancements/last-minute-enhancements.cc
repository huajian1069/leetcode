#include "last-minute-enhancements.hpp"

int main(){
	int n, m; 
	cin >> n;
	for(int i = 0; i < n; i++){
		// read inputs
		cin >> m;
		vector<int> inputs(m);
		for(int j = 0; j < m; j++) cin >> inputs[j];
		// write output
		cout << maxDiversity_greedy(inputs) << endl; 
	}
	return 0;
}