#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target);
private:
    unordered_set<int> cand;
    int min = 300;
};