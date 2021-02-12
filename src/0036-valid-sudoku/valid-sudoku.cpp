#include "valid-sudoku.hpp"
#include <set>

bool Solution::isValidSudoku(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++){
        set<char> dup;
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.')
                continue;
            if(dup.count(board[i][j]) != 0)
                return false;
            else dup.insert(board[i][j]);
        }
    }
    
    for(int i = 0; i < 9; i++){
        set<char> dup;
        for(int j = 0; j < 9; j++){
            if(board[j][i] == '.')
                continue;
            if(dup.count(board[j][i]) != 0)
                return false;
            else dup.insert(board[j][i]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            set<char> dup;
            for(int m = 0; m < 3; m++){
                for(int n = 0; n < 3; n++){
                    if(board[i*3+m][j*3+n] == '.')
                        continue;
                    if(dup.count(board[i*3+m][j*3+n]) != 0)
                        return false;
                    else dup.insert(board[i*3+m][j*3+n]);       
                }
            }
        }
    }
    return true;
}