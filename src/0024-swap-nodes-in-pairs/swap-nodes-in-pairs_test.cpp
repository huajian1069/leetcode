#include <gtest/gtest.h>
#include "swap-nodes-in-pairs.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;

	ListNode *l1_0 = new ListNode(1);

	ListNode *pred = solution.swapPairs(l1_0);
	bool res = true;
	ListNode *real = l1_0;
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
	ListNode *l1_0 = nullptr;

	ListNode *pred = solution.swapPairs(l1_0);
	bool res = true;
	ListNode *real = l1_0;
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
	ListNode *l1_1 = new ListNode(3, new ListNode(4));
	ListNode *l1_2 = new ListNode(2, l1_1);
	ListNode *l1_0 = new ListNode(1, l1_2);

	ListNode *r_1 = new ListNode(4, new ListNode(3));
	ListNode *r_2 = new ListNode(1, r_1);
	ListNode *r_0 = new ListNode(2, r_2);

	ListNode *pred = solution.swapPairs(l1_0);
	bool res = true;
	ListNode *real = r_0;
	while(pred != nullptr || real != nullptr ){
		cout << "pred: " << pred->val << endl;
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