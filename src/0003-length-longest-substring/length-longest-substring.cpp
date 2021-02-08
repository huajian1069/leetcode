#include <map>
#include <set>
#include "length-longest-substring.hpp"

int Solution::lengthOfLongestSubstring(string s) {
    int a=0, max=0;
    map<char, int> track;
    for(int i = 0; i < s.length(); i++){
      if(track.count(s[i]) != 0){
        a = s[i] > a ? s[i] : a;
      };
      track[s[i]] = i;
      if(i-a+1 > max) max = i-a+1;
    }
    return max;
}

int Solution::lengthOfLongestSubstring2(string s) {
  if(s.length() == 0) return 0;
  ms = s;
  int max=1;
  for(int i = 0; i < s.length(); i++)
    for(int j = i+1; j < s.length(); j++)
      if(check(i, j))
        if(j-i+1 > max)
          max = j-i+1;
  return max;
}

bool Solution::check(int i, int j){
  set<char> full;
  for(int k = i; k <= j; k++)
    full.insert(ms[k]);
  if(full.size() == j-i+1)
    return true;
  else return false;
}