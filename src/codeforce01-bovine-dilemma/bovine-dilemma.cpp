#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
	int n, m; 
	vector<vector<int>> trees;
	vector<int> res;
	cin >> n;
	trees.resize(n);
	res.resize(n);
	for(int i = 0; i < n; i++){
		cin >> m;
		trees[i].resize(n);
		for(int j = 0; j < m; j++){
			cin >> trees[i][j];
		}
		set<int> area;
		for(int j = 1; j < m; j++){
			//cout << "j: " << j << endl;
			for(int k = 0; k < j; k++){
				area.insert(trees[i][j] - trees[i][k]);
				//cout << k << "  "<< trees[i][j] - trees[i][k] << endl;
			}
			//cout << endl;
		} 
		res[i] = area.size();
	}

	// for(int i = 0; i < n; i++){
	// 	m = trees[i].size();
	// 	set<int> area;
	// 	cout << "m: " << m << endl;
	// 	for(int j = 1; j < m; j++){
	// 		cout << "j: " << j << endl;
	// 		for(int k = 0; k < j; k++){
	// 			area.insert(trees[i][j] - trees[i][k]);
	// 			cout << k << "  "<< trees[i][j] - trees[i][k] << endl;
	// 		}
	// 		cout << endl;
	// 	} 
	// 	res[i] = area.size();
	// }

	for(int i = 0; i < n; i++){
		cout << res[i] << endl;
	}
}