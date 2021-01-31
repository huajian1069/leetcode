#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
public:
	Solution(string &str);
	int getDistinct(string &str, int l, int r);
	int getDistinct_improve(int l, int m);

private:
	vector<int> can_min{0}, can_max{0};
	vector<int> idx_min{0}, idx_max{0};
	vector<int> poses{0};
	string &mStr;
};