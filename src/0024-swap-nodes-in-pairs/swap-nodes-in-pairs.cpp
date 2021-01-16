#include "swap-nodes-in-pairs.hpp"

ListNode* Solution::swapPairs(ListNode* head) {
    if((head == nullptr) || (head->next == nullptr))
        return head;
    ListNode* init = head->next;
    ListNode* prev = nullptr;
    while(head != nullptr && head->next != nullptr){
        ListNode* third = head->next->next;
        if(prev != nullptr)
        	prev->next = head->next;
        head->next->next = head;
        prev = head;
        head->next = third;
        head = third;
    }
    return init;
}