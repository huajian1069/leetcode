#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0);
        ListNode *res_nxt = res;
        int val1, val2;
        int pre = 0;
        while( l1 != nullptr || l2 != nullptr || pre != 0){
            if(l1 != nullptr){
                val1 = l1->val;  
                l1 = l1->next; 
            } else {
                val1 = 0;
            }
            if(l2 != nullptr){
                val2 = l2->val;
                l2 = l2->next;
            } else {
                val2 = 0;
            }
            res_nxt->next = new ListNode((val1 + val2 + pre)%10);
            pre = (val1 + val2 + pre) / 10;
            res_nxt = res_nxt->next;
        }
        return res->next;
    }
};