#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int df(){
	int n, m; 
	int res;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		vector<int> inputs(m);
		for(int j = 0; j < m; j++){
			cin >> inputs[j];
		}

		vector<int> melody;
		map<int, int> overlap;
		melody.push_back(inputs[0]);
		for(int j = 1; j < m; j++){
			// cout << "j: " << j << endl;
			if(melody.back() != inputs[j])
				melody.push_back(inputs[j]);
			else overlap[inputs[j]] = melody.size()-1;
				//cout << k << "  "<< trees[i][j] - trees[i][k] << endl;
			//cout << endl;
		}
		for(std::map<int, int>::iterator iter = overlap.begin(); iter != overlap.end(); iter++){
			int pos = iter->second;
			// cout << iter->first << " value: " << pos << endl;
			while(1){
				int value = melody[pos];
				// cout << "value " << value << endl;
				if(pos + 1 < melody.size() && melody[pos+1] == value + 1)
					pos++;
				else break;
				iter ++;
				if(melody[pos] == (iter->first))
					overlap.erase(melody[pos]);
				iter--;
			}
		}
		res = melody.size() + overlap.size();
		cout << res << endl; 
	}
}