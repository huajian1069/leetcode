#include <iostream>
#include "../basics/ListNode.hpp"
using namespace std;

class Solution{
public:
	ListNode* reverseKGroup(ListNode* head, int k);
	ListNode* reverseKGroup2(ListNode* head, int k);
	ListNode* rev(ListNode* groupPrev, int k);
	bool hasK(ListNode* a, int k);
};