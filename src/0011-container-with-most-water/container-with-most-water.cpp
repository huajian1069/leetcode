#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        bool stop = false;
        int i = 1;
        int max = 0, max_pos;
        for(int j = 0; j < height.size(); j++){
        	if(height[j] > max){
        		max = height[j];
        		max_pos = j;
        	}
        }
        max = 0;
        // cout << "fine now " << max_pos <<  endl;
        for(int j = 0; j < height.size(); j++){
            int area = abs(j - max_pos) * min(height[j], height[max_pos]);
            if(area > max)
            	max = area;
        }
        // cout << "max: " << max << endl;
        while(!stop){
        	int upper;
        	if (height[i] == 0)
        		upper = 0;
        	else {
        		upper = i - max / height[i];
        	    // cout << "no0 i: " << i << " upper " << upper << endl;
        		upper = min(i, upper);
        	}
           	// cout << "upper: " << upper << endl;
           	// cout << "i: " << i << endl;
            for(int j = 0; j <= upper; j++){
            	// cout << "j: " << j << endl;
                int area = (i - j) * min(height[j], height[i]);
                max = area > max ? area : max;
            }
            i++;
            stop = i >= height.size();
        }
        return max;
    }
private:
    int min(int a, int b){
        return a > b? b : a;    
    }
};