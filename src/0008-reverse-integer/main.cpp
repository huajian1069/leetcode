#include <iostream>
#include <cmath>
#include "inverse.cpp"
using namespace std;

int main(){
  int max_int = (unsigned int)(1 << 31) - 1;
  int min_int = (unsigned int)(1 << 31);
  cout << max_int << endl;
  cout << min_int << endl;
  Solution *so = new Solution;
  while(1){
      int in;
      cin >> in; 
      cout << so->reverse(in) << endl;
  }

}
