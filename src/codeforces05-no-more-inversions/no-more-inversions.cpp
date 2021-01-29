#include "no-more-inversions.hpp"

vector<int> Solution::getPermutation(int n, int k){
	vector<int> ans;
	for(int i = 1; i <= k; i++){
		if(i >= 2*k-n)
			ans.push_back(3*k-n-i);
		else ans.push_back(i);
	}
	return ans;
}