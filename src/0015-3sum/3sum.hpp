#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <set>
using namespace std;

class Solution{
public:
	vector<vector<int>> threeSum(vector<int>& nums);
	vector<vector<int>> twoSum(vector<int>& nums, unordered_map<int, int>& valueIdx, 
		unordered_set<int>& knownHead, int target, int idx);
};