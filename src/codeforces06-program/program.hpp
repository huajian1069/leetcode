#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
public:
	Solution(string &str);
	Solution(string &str, int m);
	int getDistinct(string &str, int l, int r);
	int getDistinct_improve(int l, int r);
	int getDistinct_improve2(int l, int r);

private:
	vector<int> can_min{0}, can_max{0};
	vector<int> idx_min{0}, idx_max{0};
	vector<int> inv_min{0}, inv_max{0};
	vector<int> poses{0};
	int mM;
};