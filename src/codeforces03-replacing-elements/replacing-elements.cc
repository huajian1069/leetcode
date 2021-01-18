#include <iostream>
using namespace std;

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
		int min = 101, max = 0, min_sub = 101;
		for(int j = 0; j < n; j++){
			if(a[j] > max)
				max = a[j];
			if(a[j] < min){
				min_sub = min;
				min = a[j];
			}
			else if(a[j] < min_sub)
				min_sub = a[j];
		}
		if(max <= d || min + min_sub <= d)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}