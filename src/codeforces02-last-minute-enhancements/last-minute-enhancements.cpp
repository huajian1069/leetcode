#include "last-minute-enhancements.hpp"
#include <set>

int maxDiversity(vector<int> &inputs){
	// count results
	bool allow = true;
	int prev = inputs[0];
	int ans = 1; 
	for(int j = 1; j < inputs.size(); j++){
		if(prev != inputs[j]){
			if(prev !=  inputs[j]-1)
				allow = true;
			ans++;
		}
		else if(allow == true){
			ans++;
			allow = false;
		}
		prev = inputs[j];
	}
	return ans;
}

int maxDiversity_greedy(vector<int> &inputs){
	set<int> melody;
	for(int digit : inputs){
		if(melody.count(digit) == 0)
			melody.insert(digit);
		else melody.insert(digit+1);
	}
	return melody.size();
}