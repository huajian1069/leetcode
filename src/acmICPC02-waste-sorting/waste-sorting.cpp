#include "waste-sorting.hpp"

string Solution::canFit(int *c, int *a){
	bool res = true;
	int diff[3];
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
	return res ? "YES" : "NO";
}
