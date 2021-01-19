#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s;
		cin >> t;
		int j = 0;
		string com;
		bool stop = false;
		bool is = true;
		int mm, nn;
		while(j < s.length() || j < t.length()){
			if(j < s.length() && j < t.length()){
				if(!stop && s[j] == t[j]){
					if(j == 0 || (j > 0 && s[j] != s[j-1])){
					 	com += s[j];
					 	continue;
					}
				} else {
					if(s.length() % com.length() != 0 || t.length() % com.length() != 0){
						is = false;
						break;
					} else{
						mm = s.length() / com.length();
						nn = t.length() / com.length();
					}
					stop = true;
				}
			} 
			if(j < s.length()){
				if(s[j-com.length()] != s[j]){
					is = false;
					break;
				}
			} 
			if(j < t.length()){
				if(t[j-com.length()] != t[j]){
					is = false;
					break;
				}
			}
			j++;
			cout << "j: " << j << endl;
		}
		if(!is)
			cout << "-1" << endl;
		else {
			string res = "";
			int l = lcm(mm, nn);
			while(l--) res += com;
			cout << res << endl;
		}
	}
}