#include "reverse-nodes-in-k-group.hpp"

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
	if (k == 1) return head;
    ListNode *str = new ListNode(0, head); 
    ListNode *prev = str, *first = head, *second = head;
    while(1){
    	ListNode *begin = nullptr, *end = nullptr;
        for(int i = 0; i < k; i++){
            if(second == nullptr){
            	prev->next = begin;
                return str->next;
            }
            if(i == 0) begin = second;
            if(i == k-1) end = second;
            second = second->next;
        }
        prev->next = end;
        prev = begin;
        first = begin->next;
        for(int i = 1; i < k; i++){
        	ListNode *nxt;
            nxt = first->next;
            first->next = prev;
            prev = first;
            first = nxt;
        }
        prev = begin;
    }
    return str->next;
}
