#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		//read inputs
		int array[4];
		for(int j = 0; j < 4; j++)
			cin >> array[j];
		// process
		sort(array, array+4);
		// output
		cout << array[0] * array[2] << endl;
	}
	return 0;
}