#include <gtest/gtest.h>
#include "longest-palindromic-substring.hpp"

// Function to reverse a string 
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
 

TEST(Solution, SimpleTest1){
	string s = "ccc";
	Solution solution;
	string pred = solution.longestPalindrome(s);
	ASSERT_EQ(s, pred);
}


TEST(Solution, SimpleTest2){
	string s = "bananas";
	Solution solution;
	string pred = solution.longestPalindrome(s);
	string real = "anana";
	ASSERT_EQ(real, pred);
}

TEST(Solution, SimpleTest3){
	string s = "aaaa";
	for (int i = 0; i < 24; i++)
		s += string(10, 'b' + i);
	s += string(5, 'z');
	string inv_s = s;
	reverseStr(inv_s);
	s += inv_s;
	s += s;
	Solution solution;
	string pred = solution.longestPalindrome(s);
	cout << pred.length() << " length " << s.length() << endl;
	ASSERT_EQ(s, pred);
}

