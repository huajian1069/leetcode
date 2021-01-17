#include "merge-k-sorted-lists.hpp"
#include <utility>
#include <queue>

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    priority_queue<pair<int, ListNode*>> head_vals;
    for(int i = 0; i < lists.size(); i++){
        if(lists[i] != nullptr)
        	head_vals.push(make_pair(-lists[i]->val, lists[i]));
    }
    while(1){
  		if(head_vals.empty())
  			break;
        pair<int, ListNode*> top = head_vals.top();
        cur->next = top.second;
        cur = cur->next;
        head_vals.pop();
        if(head_vals.empty())
            break;
        if(top.second->next != nullptr)
        	head_vals.push(make_pair(-top.second->next->val, top.second->next));
    }
    return head->next;
}