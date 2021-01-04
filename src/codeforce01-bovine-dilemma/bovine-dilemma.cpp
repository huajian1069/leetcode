#include <iostream>
#include <vector>
#include <set>
#include "bovine-dilemma.hpp"

int main(){
	int n, m; 
	cin >> n;
	for(int i = 0; i < n; i++){
		// read inputs
		cin >> m;
		vector<int> trees(m);
		for(int j = 0; j < m; j++){
			cin >> trees[j];
		}

		// count different areas
		set<int> area;
		for(int j = 1; j < m; j++){
			for(int k = 0; k < j; k++){
				area.insert(trees[j] - trees[k]);
			}
		} 
		// write output
		cout << area.size() << endl;
	}
}