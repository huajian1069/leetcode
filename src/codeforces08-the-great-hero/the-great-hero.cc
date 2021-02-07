#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int A, B, m;
		cin >> A >> B >> m;
		int a[m], b[m], cnt;
		int max = 0;
		for(int j = 0; j < m; j++){
			cin >> a[j];
			if(max < a[j]) max = a[j];
		}	
		for(int j = 0; j < m; j++)	cin >> b[j];
		for(int j = 0; j < m; j++){
			cnt = b[j] / A + ((b[j] % A) > 0);
			B -= cnt * a[j];
			// cout << "cnt:"  <<  b[j] / A << endl;
			// cout << j << ": " << "B: " << B << endl;
		}
		cout << (B > -max ? "YES" : "NO") << endl;
	}
}