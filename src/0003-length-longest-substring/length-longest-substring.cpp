#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> head_record;
        int max_length = 0;
        int j = s.length();
        for(int i = s.length()-1; i >= 0; i--){
            if(head_record.count(s[i]) != 0){
                j = min(j, head_record[s[i]]);
            }
            head_record[s[i]] = i;
            max_length = max(max_length, j-i);
        }
        return max_length;
    }
};