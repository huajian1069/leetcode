#include <gtest/gtest.h>
#include "add-two-sum.cpp"

TEST(Solution, SimpleTest){
	Solution solution;
	ListNode l1_0(2);
	ListNode l1_1(4, l1_0);
	ListNode l1_2(3, l1_1);
	ListNode l2_0(5);
	ListNode l2_1(6, l2_0);
	ListNode l2_2(4, l2_1);
	ListNode r_0(7);
	ListNode r_1(0, r_0);
	ListNode r_2(8, r_1);

	ListNode pred = solution.addTwoNumbers(l1_0, l2_0);
	bool res = true;
	ListNode real = r_0;
	while(pred != nullptr || real != nullptr ){
		if (pred == nullptr || real == nullptr){
			res = false;
			break;
		}
		res = res && (pred->val == real->val);
		pred = pred->next;
		real = real->next;
	}
	return res;
}