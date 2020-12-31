#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m; 
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		vector<int> inputs(m);
		for(int j = 0; j < m; j++){
			cin >> inputs[j];
		}
		int res;
		bool allow = true;
		vector<int> melody;
		vector<int> overlap;
		melody.push_back(inputs[0]);
		for(int j = 1; j < m; j++){
			// cout << "j: " << j << endl;
			if(melody.back() != inputs[j]){
				if(melody.back() !=  inputs[j]-1)
					allow = true;
				melody.push_back(inputs[j]);
			}
			else if(allow == true){
					overlap.push_back(inputs[j]);
					allow = false;
			}
				//cout << k << "  "<< trees[i][j] - trees[i][k] << endl;
			//cout << endl;
		}
		// for(auto v : melody){
		// 	cout << "vector: " << v << endl;
		// }
		// for(auto o : overlap){
		// 	cout << "map: " << o << endl;
		// }
		res = melody.size() + overlap.size();
		cout << res << endl; 
	}
	return 0;
}