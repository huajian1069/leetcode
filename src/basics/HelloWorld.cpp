#include "HelloWorld.hpp"

void HelloWorld::printMaxMinInt(){
	int max = (unsigned int)(1 << 31) - 1;
	int min = (1 << 31);
	cout << "Max Int: " << max << endl;
	cout << "Min Int: " << min << endl;
}