#include <gtest/gtest.h>
#include "merge-two-sorted-lists.hpp"

TEST(Solution, SimpleTest1){
	ListNode *l1_1 = new ListNode(3, new ListNode(8));
	ListNode *l1_0 = new ListNode(2, l1_1);

	ListNode *l2_1 = new ListNode(4, new ListNode(9));
	ListNode *l2_0 = new ListNode(1, l2_1);

	ListNode *r_1 = new ListNode(8, new ListNode(9));
	ListNode *r_2 = new ListNode(4, r_1);
	ListNode *r_3 = new ListNode(3, r_2);
	ListNode *r_4 = new ListNode(2, r_3);
	ListNode *r_5 = new ListNode(1, r_4);

	Solution solution;
	ListNode *pred = solution.mergeTwoLists(l1_0, l2_0);
	bool res = true;
	ListNode *real = r_5;
	while(pred != nullptr || real != nullptr ){
		if (pred == nullptr || real == nullptr){
			res = false;
			break;
		}
		res = res && (pred->val == real->val);
		pred = pred->next;
		real = real->next;
	}
	ASSERT_TRUE(res);
}
