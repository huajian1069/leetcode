#include "generate-parentheses.hpp"

vector<string> Solution::generateParenthesis(int n) {
    string s = "(";
    vector<string> vec{s};
    vector<int> left{1};
    vector<int> right{0};
    for(int i = 1; i < 2*n; i++){
    	// cout << "i: " << i << endl;
    	int init_size = vec.size();
        for(int j = 0; j < init_size; j++){
        	// cout << "size: " << vec.size() << "j: " << j << endl;
            if(left[j] < n){
                if(left[j] > right[j]){
                    vec.push_back(vec[j] + "(");
                    left.push_back(left[j]+1);
                    right.push_back(right[j]);
                    vec[j] += ")";
                    right[j] += 1;
                } else {
                	vec[j] += "(";
                	left[j] += 1;
                }
            } else vec[j] += ")";
        }
    }
    return vec;
}