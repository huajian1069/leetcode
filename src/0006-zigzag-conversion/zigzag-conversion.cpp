#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        bool stop = false;
        char **res = new char*[numRows];
        int numCols = int(s.length()/2) + 1;
        for(int j = 0; j < numRows; j++){
            res[j] = new char[numCols];
            for(int k = 0; k < numCols; k++)
                res[j][k] = 0;
        }
        bool down = true;
        int row = 0, col = 0;
        int i = 0;
        while(!stop){
            res[row][col] = s[i++];
            if(row == numRows-1)
                down = false;
            else if(row == 0)
                down = true;
            if(down)
                row += 1;
            else{
                row -= 1;  
                col += 1;
            } 
            stop = i == s.length();
        }
        string ress;
        for(int j = 0; j < numRows; j++)
            for(int k = 0; k < numCols; k++)
                if(res[j][k] != 0)
                    ress += res[j][k];
        for(int i = 0; i < numRows; i++)
            delete[] res[i];
        delete[] res;
        res = nullptr;
        return ress;
    }
};

