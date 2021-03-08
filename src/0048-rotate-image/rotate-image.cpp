#include "rotate-image.hpp"

void Solution::rotate(vector<vector<int>>& matrix) {
    n = matrix.size()-1;
    for(int i = 0; i < (n+1)/2; i++){
        for(int j = i; j < n-i; j++){
            rotateItem(matrix, i, j);
        }
    }
}

void Solution::rotateItem(vector<vector<int>>& matrix, int i, int j){
    int nI = j; 
    int nJ = n - i;
    int nxt = matrix[nI][nJ];
    matrix[nI][nJ] = matrix[i][j];
    
    int ex = nI;
    nI = nJ;
    nJ = n - ex;
    ex = matrix[nI][nJ];
    matrix[nI][nJ] = nxt;
    nxt = ex;
    
    ex = nI;
    nI = nJ;
    nJ = n - ex;
    ex = matrix[nI][nJ];
    matrix[nI][nJ] = nxt;
    nxt = ex;
    
    ex = nI;
    nI = nJ;
    nJ = n - ex;
    matrix[nI][nJ] = nxt;
}