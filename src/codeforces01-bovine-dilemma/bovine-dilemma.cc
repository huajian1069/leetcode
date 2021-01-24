#include "bovine-dilemma.hpp"

int main(){
	int n, m; 
	cin >> n;
	while(n--){
		// read inputs
		cin >> m;
		vector<int> trees(m);
		for(int j = 0; j < m; j++){
			cin >> trees[j];
		}
		// write output
		cout << diffArea(trees) << endl;
	}
}