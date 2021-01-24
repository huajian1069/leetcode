#include "replacing-elements.hpp"

string isPoss(int a[], int d, int n){
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
	string ans;
	if(max <= d || min + min_sub <= d)
		ans = "YES";
	else 
		ans = "NO";
	return ans;
}