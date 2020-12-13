#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, bool> long_record;
        int long_pos = s.length();
        map<char, bool> head_record;
        for(int i = s.length()-1; i >= 0; i--){
            if(long_record.count(s[i]) == 0 && i == long_pos-1){
                long_pos -= 1;
                long_record[s[i]] = true;
                //continue;
            }
            if(head_record.count(s[i]) == 0){
                head_record[s[i]] = true;
            } else {
                map<char, bool> record;
                record[s[i]] = true;
                int j = 1;
                while(i+j < s.length() && record.count(s[i+j]) == 0){
                    record[s[i+j]] = true;
                    j++;
                }
                head_record = record;
            }
            if(head_record.size() > long_record.size()){
                long_pos = i;
                long_record = head_record;
            }
        }
        return long_record.size();
    }
};