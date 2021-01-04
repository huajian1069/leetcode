#include "four-segments.hpp"
#include <algorithm>

int Solution::maxArea(int *array){
	sort(array, array+4);
	return array[0] * array[2];
}

