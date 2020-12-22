#include <string>
#include <map>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        bool stop = false;
        bool down = true;
        int row = 0, col = 0;
        map<int, char> m;
        int numCols = int(s.length()/2) + 1;
        int i = 0;
        while(!stop){
            m[row*numCols + col] = s[i++];
            if(row == numRows-1)
                down = false;
            else if(row == 0)
                down = true;
            if (numRows == 1)
                col += 1;
            else if(down)
                row += 1;
            else{
                row -= 1;  
                col += 1;
            } 
            stop = i == s.length();
        }
        string ress;
        for(auto &iter : m)
            ress += iter.second;
        return ress;
    }
};

