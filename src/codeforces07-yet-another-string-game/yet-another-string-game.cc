#include <iostream>
#include <set>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<char> chs;
	for(char c = 'a'; c <= 'z'; c++){
		chs.insert(c);
	} 
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		set<char> cc = chs;
		for(int i = 0; i < s.length(); i++){
			cc.erase(s[i]); 
		}
		for(int i = 0; i < s.length(); i++){
			if(i % 2 == 0){
				s[i] = *(cc.begin());
				// cout << i << " : "  << s[i] << endl;
				// cc.erase(s[i]);
			} else {
				s[i] = *(cc.rbegin());
				// cout  << i << " : " << s[i] << endl;
				// cc.erase(s[i]);
			}
		}
		cout << s << endl;
	}
}