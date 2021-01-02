#include <algorithm>
#include <cmath>
#include "container-with-most-water.hpp"

int Solution::maxArea(vector<int>& height) {
    int i = 0, j = height.size()-1;
    int maxA = 0;
    while(i != j){
        maxA = max(maxA, (j - i)*min(height[j], height[i]));
        if(height[i] > height[j])
            j--;
        else i++;
    }
    return maxA;
}