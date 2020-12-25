#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	std::vector<int> spiralPrinting(int m, int n){
		vector<vector<int>> mat(m, vector<int>(n, 0));
		bool stop = false;
		int i = 1;
		int flag = 0;
		int row = 0, col = 0;
		const int max = m * n;
		while(!stop){
			switch(flag%4){
				case 0:
					mat[row][col++] = i++;
					if(col >= n || mat[row][col] != 0){
						col--;
						row++;
						flag++;
					}
					break;
				case 1:
					mat[row++][col] = i++;
					if(row >= m || mat[row][col] != 0){
						row--;
						col--;
						flag++;
					}
					break;
				case 2:
					mat[row][col--] = i++;
					if(col < 0 || mat[row][col] != 0){
						col++;
						row--;
						flag++;
					}
					break;
				case 3:
					mat[row--][col] = i++;
					if(row < 0 || mat[row][col] != 0){
						row++;
						col++;
						flag++;
					}
			}
			stop = i > max; 
		}
		vector<int> acc;
		for(int i = 0; i < m; i++){
			acc.insert(acc.end(), mat[i].begin(), mat[i].end());
			for(int j = 0; j < n; j++)
				cout << mat[i][j] << "\t";
			cout << endl;
		}
		return acc;
	}
};