#include "add-two-sum.hpp"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *res = new ListNode(0);
    ListNode *res_nxt = res;
    int val1, val2;
    int pre = 0;
    bool stop = false;
    while(!stop){
        if(l1 != nullptr){
            val1 = l1->val;  // evaluate objective/performance
            l1 = l1->next;  // move in design space
        } else {
            val1 = 0;
        }
        if(l2 != nullptr){  
            val2 = l2->val;  // evaluate objective/performance
            l2 = l2->next; // move in design space
        } else {
            val2 = 0;
        }
        res_nxt->next = new ListNode((val1 + val2 + pre)%10); // evaluate objective/performance
        pre = (val1 + val2 + pre) / 10;  // evaluate objective/performance
        res_nxt = res_nxt->next;  
        stop = l1 == nullptr && l2 == nullptr && pre == 0;
    }
    return res->next;
}