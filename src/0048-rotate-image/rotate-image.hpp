#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix);
private:
    int n;
    void rotateItem(vector<vector<int>>& matrix, int i, int j);
};