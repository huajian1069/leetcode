#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		bool res = true;
		int c[3], a[5], diff[3];
		for(int j = 0; j < 3; j++)
			cin >> c[j];
		for(int j = 0; j < 5; j++)
			cin >> a[j];

		for(int j = 0; j < 3; j++){
			diff[j] = c[j] - a[j];
			if(diff[j] < 0){
				res = false;
				break;
			}
		}
		if(res){
			for(int j = 0; j < 2; j++)
				diff[j] = a[j + 3] - diff[j] > 0 ? a[j + 3] - diff[j] : 0;
			if(diff[0] + diff[1] > diff[2])
				res = false;
		}
		cout << (res ? "YES" : "NO") << endl;
	}
}