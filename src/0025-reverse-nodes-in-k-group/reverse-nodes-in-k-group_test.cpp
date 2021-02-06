#include <gtest/gtest.h>
#include "reverse-nodes-in-k-group.hpp"

void check(ListNode *in, int k, ListNode *real){
	Solution solution;
	ListNode *pred = solution.reverseKGroup(in, k);
	bool res = true;
	while(pred != nullptr || real != nullptr ){
		if (pred == nullptr || real == nullptr){
			res = false;
			break;
		}
		cout << "pred: " << pred->val << endl;
		res = res && (pred->val == real->val);
		pred = pred->next;
		real = real->next;
	}
	ASSERT_TRUE(res);
}

TEST(Solution, SimpleTest1){
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(3, new ListNode(5));
	ListNode *r1_2 = new ListNode(4, r1_1);
	ListNode *r1_3 = new ListNode(1, r1_2);
	ListNode *r1_0 = new ListNode(2, r1_3);

	check(l1_0, 2, r1_0);
}


TEST(Solution, SimpleTest2){
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(4, new ListNode(5));
	ListNode *r1_2 = new ListNode(1, r1_1);
	ListNode *r1_3 = new ListNode(2, r1_2);
	ListNode *r1_0 = new ListNode(3, r1_3);

	check(l1_0, 3, r1_0);
}


TEST(Solution, SimpleTest3){
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(4, new ListNode(5));
	ListNode *r1_2 = new ListNode(3, r1_1);
	ListNode *r1_3 = new ListNode(2, r1_2);
	ListNode *r1_0 = new ListNode(1, r1_3);

	check(l1_0, 1, r1_0);
}

TEST(Solution, SimpleTest4){
	ListNode *l1_0 = new ListNode(1);

	ListNode *r1_0 = new ListNode(1);

	check(l1_0, 1, r1_0);
}

TEST(Solution, SimpleTest5){
	ListNode *l1_0 = new ListNode(1, new ListNode(2));

	ListNode *r1_0 = new ListNode(2, new ListNode(1));

	check(l1_0, 2, r1_0);
}