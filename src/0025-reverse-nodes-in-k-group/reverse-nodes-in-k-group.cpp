#include "reverse-nodes-in-k-group.hpp"

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
	// dealing with trivial case
	if (k == 1) return head;  
	// auxiliary variable, to unify the first iteration as one general iteration
    ListNode *dummy = new ListNode(0, head); 
    // global state to track and update
    ListNode *groupPrev = dummy;
    while(1){
    	ListNode *begin = nullptr, *end = nullptr, *iter = groupPrev->next;
        for(int i = 0; i < k; i++){
            if(iter == nullptr){
                return dummy->next;
            }
            if(i == 0) begin = iter;
            if(i == k-1) end = iter;
            iter = iter->next;
        }
        groupPrev->next = end;
        groupPrev = begin;

        ListNode *prev = iter;
        ListNode *iter2 = begin;
        for(int i = 0; i < k; i++){
        	ListNode *nxt;
            nxt = iter2->next;

            iter2->next = prev;

            prev = iter2;
            iter2 = nxt;
        }
    }
}

ListNode* Solution::rev(ListNode* groupPrev, int k) {
	ListNode *b = groupPrev->next;
    for (int i = 0; i < k-1; ++i) {
        ListNode* bn = b->next;
        b->next = b->next->next;
        bn->next = groupPrev->next;
        groupPrev->next = bn;
    }
    return b;
}
    
bool Solution::hasK(ListNode* a, int k) {
    for (int i = 0; i < k; ++i) {
        a = a->next;
        if (a == nullptr) {
            return false;
        }
    }
    return true;
}

ListNode* Solution::reverseKGroup2(ListNode* head, int k) {
    ListNode* dum = new ListNode(0, head);
    ListNode* groupPrev = dum;
    while (hasK(groupPrev, k)) {
        groupPrev = rev(groupPrev, k);
    }
    return dum->next;
}