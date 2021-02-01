#include "program.hpp"
#include <set>

Solution::Solution(string &str){
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

Solution::Solution(string &str, int m): mM(m){
	int pos = 0;
	for(int i = 0; i < m; i++){
		if(str[i] == '+'){
			pos++;
		} else pos--;
		if(pos > can_max.back())
			can_max.push_back(pos);
		else 
			can_max.push_back(can_max.back());
		if(pos < can_min.back())
			can_min.push_back(pos);
		else 
			can_min.push_back(can_min.back());
		poses.push_back(pos);
		// cout << "i: " << i << endl;
		// cout << " can_max back : " << can_max.back() << endl;
		// cout << " can_min back : " << can_min.back() << endl;
	}
	pos = 0;
	for(int i = str.length()-1; i >= 0; i--){
		if(str[i] == '-'){
			pos++;
		} else pos--;
		if(pos > inv_max.back())
			inv_max.push_back(pos);
		else 
			inv_max.push_back(inv_max.back());
		if(pos < inv_min.back())
			inv_min.push_back(pos);
		else 
			inv_min.push_back(inv_min.back());
	}
}

int Solution::getDistinct_improve2(int l, int r){
	int max_l = can_max[l-1];
	int min_l = can_min[l-1];
	int diff = poses[r] - poses[l-1];
	int max_r = inv_max[mM-r] + poses[mM] - diff;
	int min_r = inv_min[mM-r] + poses[mM] - diff;
	int max = max_l > max_r ? max_l : max_r;
	int min = min_l < min_r ? min_l : min_r;
	// cout << "max_r: " << max_r << endl;
	// cout << "min_r: " << min_r << endl;
	// cout << "max_l: " << max_l << endl;
	// cout << "min_l: " << min_l<< endl;
	// cout << "diff: " << diff << endl;
	// cout << "poses[mM-1]: " << poses[mM] << endl;
	return max - min + 1;
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