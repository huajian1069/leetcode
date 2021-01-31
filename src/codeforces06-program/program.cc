#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

class Solution{
public:
	Solution(string &str);
	int getDistinct(string &str, int l, int r);
	int getDistinct_improve(int l, int m);

private:
	vector<int> can_min{0}, can_max{0};
	vector<int> idx_min{0}, idx_max{0};
	vector<int> poses{0};
	string &mStr;
};

Solution::Solution(string &str): mStr(str){
	int pos = 0;
	char aft;
	for(int i = 0; i < str.length()-1; i++){
		aft = str[i+1];
		if(str[i] == '+'){
			pos++;
			if(aft == '-'){
				can_max.push_back(pos);
				idx_max.push_back(i+1);
			}
			// cout << "can_max: " << can_max.back() << ", idx_max: " << idx_max.back() << endl;
		}
		else{
			pos--;
			if(aft == '+'){
				can_min.push_back(pos);
				idx_min.push_back(i+1);
			}
			// cout << "can_min: " << can_min.back() << ", idx_min: " << idx_min.back() << endl;
		}
		poses.push_back(pos);
	}
	if(str.length() > 1){
		if(str.back() == '+'){
			pos++;
			can_max.push_back(pos);
			idx_max.push_back(str.length());
		} else {
			pos--;
			can_min.push_back(pos);
			idx_min.push_back(str.length());
		}
		poses.push_back(pos);
	}
}

int Solution::getDistinct(string &str, int l, int r){
	string sub = str.substr(0, l-1) + str.substr(r, str.length()-r);
	set<int> dis{0};
	int pos = 0;
	for(char c : sub){
		if(c == '-')
			dis.insert(--pos);
		else
			dis.insert(++pos);
	}
	return dis.size();
}

int Solution::getDistinct_improve(int l, int r){
	int diff = poses[r] - poses[l-1];
	int min_ = poses[l-1], max_ = poses[l-1];
	for(int i = 0; i < can_max.size(); i++){
		if(idx_max[i] < l){
			if(can_max[i] > max_)
				max_ = can_max[i];
		} else if(idx_max[i] >= r){
			if(can_max[i]-diff > max_)
				max_ = can_max[i]-diff;
		}
	}
	for(int i = 0; i < can_min.size(); i++){
		if(idx_min[i] < l){
			if(can_min[i] < min_)
				min_ = can_min[i];
		} else if(idx_min[i] >= r){
			if(can_min[i]-diff < min_)
				min_ = can_min[i]-diff;
		}
	}
	// cout << "diff: " << diff << endl;
	// cout << "max_: "  << max_ << " ,min_: " << min_ << endl; 
	return max_ - min_ + 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		string str;
		cin >> n;
		cin >> m;
		cin >> str;
		Solution solution(str);
		while(m--){
			int l, r;
			cin >> l >> r;
			cout << solution.getDistinct_improve(l, r) << endl;
		}
	}
}