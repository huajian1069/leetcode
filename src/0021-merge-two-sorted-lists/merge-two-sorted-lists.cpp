#include "merge-two-sorted-lists.hpp"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;
    ListNode *head = new ListNode(-200, l1), *end = new ListNode(200);
    ListNode *now = head, *nxt = l1;
    while(1){
        if(l2->val < nxt->val){
            // reconnect
            now->next = l2;
            ListNode *in = l2->next;
            if(nxt->val != 200)
                l2->next = nxt;
            else break;
            // update
            now = l2;
            // move one step
            if(in != nullptr)
                l2 = in;
            else
                break;
        }else {
            now = nxt;
            if(now->next != nullptr)
                nxt = now->next;
            else
                nxt = end;
        }
    }
    return head->next;
}