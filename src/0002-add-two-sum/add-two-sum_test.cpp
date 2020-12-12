#include <gtest/gtest.h>
#include "add-two-sum.cpp"

TEST(Solution, SimpleTest){
	Solution solution;
	ListNode *l1_1 = new ListNode(4, new ListNode(3));
	ListNode *l1_0 = new ListNode(2, l1_1);

	ListNode *l2_1 = new ListNode(6, new ListNode(4));
	ListNode *l2_0 = new ListNode(5, l2_1);

	ListNode *r_1 = new ListNode(0, new ListNode(8));
	ListNode *r_0 = new ListNode(7, r_1);

	ListNode *pred = solution.addTwoNumbers(l1_0, l2_0);
	bool res = true;
	ListNode *real = r_0;
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