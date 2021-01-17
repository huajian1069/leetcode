#include "merge-k-sorted-lists.hpp"


ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    int len = 0;
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    int min_idx;
    vector<ListNode*> heads;
    for(int i = 0; i < lists.size(); i++){
        heads.push_back(lists[i]);
    }
    while(1){
        len = 0;
        int min = 100000;
        for(int i = 0; i < lists.size(); i++){
            if(heads[i] != nullptr){
                if(heads[i]->val < min){
                    min_idx = i;
                    min = heads[i]->val;
                }
                len++;
            }
        }
        if(len == 0)
            break;
        if(len == 1){
            cur->next = heads[min_idx];
            break;
        }
        cur->next = heads[min_idx];
        cur = cur->next;
        heads[min_idx] = heads[min_idx]->next;
    }
    return head->next;
}