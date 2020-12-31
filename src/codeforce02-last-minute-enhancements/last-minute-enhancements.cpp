#include <iostream>
#include <vector>
#include "last-minute-enhancements.hpp"
using namespace std;

int main(){
	int n, m; 
	cin >> n;
	for(int i = 0; i < n; i++){
		// read inputs
		cin >> m;
		vector<int> inputs(m);
		for(int j = 0; j < m; j++){
			cin >> inputs[j];
		}

		// count results
		int res;
		bool allow = true;
		vector<int> melody;
		vector<int> overlap;
		melody.push_back(inputs[0]);
		for(int j = 1; j < m; j++){
			if(melody.back() != inputs[j]){
				if(melody.back() !=  inputs[j]-1)
					allow = true;
				melody.push_back(inputs[j]);
			}
			else if(allow == true){
					overlap.push_back(inputs[j]);
					allow = false;
			}
		}
		res = melody.size() + overlap.size();

		// write output
		cout << res << endl; 
	}
	return 0;
}