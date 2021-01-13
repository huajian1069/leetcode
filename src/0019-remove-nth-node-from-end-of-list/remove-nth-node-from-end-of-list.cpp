#include "remove-nth-node-from-end-of-list.hpp"
#include <vector>

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    vector<ListNode*> ls;
    ListNode* org = head;
    while(head != nullptr){
        ls.push_back(head);
        head = head->next;
    }
    int pos = ls.size() - n;
    if(pos == 0)
        return org->next;
    else if(n == 1)
        ls[pos-1]->next = nullptr;
    else
        ls[pos-1]->next = ls[pos+1];
    return org;
}
