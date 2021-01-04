#include "merge-two-sorted-lists.hpp"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;
    ListNode *head, *main_c, *alt;
    if(l1->val < l2->val){
        head = l1;
        main_c = head;
        alt = l2;
    }
    else{
        head = l2;
        main_c = head;
        alt = l1;
    }
    while(1){
        if(main_c->next == nullptr){
            main_c->next = alt;
            break;
        }
        if(main_c->next->val <= alt->val){
            main_c = main_c->next;
        } else {
            ListNode *ex = alt;
            alt = main_c->next;
            main_c->next = ex;
            main_c = ex;
        }
    }
    return head;
}