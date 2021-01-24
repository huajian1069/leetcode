#include "bovine-dilemma.hpp"
#include <set>

int diffArea(vector<int> &trees){
	// count different areas
	set<int> area;
	for(int j = 1; j < trees.size(); j++){
		for(int k = 0; k < j; k++){
			area.insert(trees[j] - trees[k]);
		}
	}
	return area.size(); 
}