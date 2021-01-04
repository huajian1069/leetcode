#include "merge-two-sorted-lists.hpp"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;
    ListNode *head, **socket;
    if(l1->val < l2->val){
        head = l1;
        socket = &(l1->next);
        if(l1->next == nullptr){
            l1->next = l2;
            return head;
        } else l1 = l1->next;
    }
    else{
        head = l2;
        socket = &(l2->next);
        if(l2->next == nullptr){
            l2->next = l1;
            return head;
        } else l2 = l2->next;
    }
    while(1){
        if(l1->val < l2->val){
            *socket = l1;
            socket = &(l1->next);
            if(l1->next == nullptr){
                l1->next = l2;
                break;
            } else l1 = l1->next;
        } else {
            *socket = l2;
            socket = &(l2->next);
            if(l2->next == nullptr){
                l2->next = l1;
                break;
            } else l2 = l2->next;
        }
    }
    return head;
}