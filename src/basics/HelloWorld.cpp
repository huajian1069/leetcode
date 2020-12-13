#include <iostream>

using namespace std;

class HelloWorld{
public:
	void printMaxMinInt(){
		int max = (1 << 31) - 1;
		int min = (1 << 31);
		cout << "Max Int: " << max << endl;
		cout << "Min Int: " << min << endl;
	}
};