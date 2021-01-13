#include <gtest/gtest.h>
#include "remove-nth-node-from-end-of-list.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	ListNode *l1_4 = new ListNode(4, new ListNode(5));
	ListNode *l1_3 = new ListNode(3, l1_4);
	ListNode *l1_2 = new ListNode(2, l1_3);
	ListNode *l1_1 = new ListNode(1, l1_2);

	ListNode *r1_4 = new ListNode(3, new ListNode(5));
	ListNode *r1_2 = new ListNode(2, r1_4);
	ListNode *r1_1 = new ListNode(1, r1_2);

	ListNode *pred = solution.removeNthFromEnd(l1_1, 2);
	bool res = true;
	ListNode *real = r1_1;
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

TEST(Solution, SimpleTest2){
	Solution solution;
	ListNode *l1_1 = new ListNode(1, new ListNode(2));

	ListNode *r1_1 = new ListNode(1);

	ListNode *pred = solution.removeNthFromEnd(l1_1, 1);
	bool res = true;
	ListNode *real = r1_1;
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

TEST(Solution, SimpleTest3){
	Solution solution;
	ListNode *l1_1 = new ListNode(1);

	ListNode *r1_1 = nullptr;

	ListNode *pred = solution.removeNthFromEnd(l1_1, 1);
	bool res = true;
	ListNode *real = r1_1;
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