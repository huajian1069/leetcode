#include <gtest/gtest.h>
#include "reverse-nodes-in-k-group.hpp"

TEST(Solution, SimpleTest1){
	Solution solution;
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(3, new ListNode(5));
	ListNode *r1_2 = new ListNode(4, r1_1);
	ListNode *r1_3 = new ListNode(1, r1_2);
	ListNode *r1_0 = new ListNode(2, r1_3);

	ListNode *pred = solution.reverseKGroup(l1_0, 2);
	bool res = true;
	ListNode *real = r1_0;
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


TEST(Solution, SimpleTest2){
	Solution solution;
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(4, new ListNode(5));
	ListNode *r1_2 = new ListNode(1, r1_1);
	ListNode *r1_3 = new ListNode(2, r1_2);
	ListNode *r1_0 = new ListNode(3, r1_3);

	ListNode *pred = solution.reverseKGroup(l1_0, 3);
	bool res = true;
	ListNode *real = r1_0;
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


TEST(Solution, SimpleTest3){
	Solution solution;
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_2 = new ListNode(3, l1_1);
	ListNode *l1_3 = new ListNode(2, l1_2);
	ListNode *l1_0 = new ListNode(1, l1_3);

	ListNode *r1_1 = new ListNode(4, new ListNode(5));
	ListNode *r1_2 = new ListNode(3, r1_1);
	ListNode *r1_3 = new ListNode(2, r1_2);
	ListNode *r1_0 = new ListNode(1, r1_3);

	ListNode *pred = solution.reverseKGroup(l1_0, 1);
	bool res = true;
	ListNode *real = r1_0;
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

TEST(Solution, SimpleTest4){
	Solution solution;
	ListNode *l1_0 = new ListNode(1);

	ListNode *r1_0 = new ListNode(1);

	ListNode *pred = solution.reverseKGroup(l1_0, 1);
	cout << "pred: " << pred->val << endl;
	bool res = true;
	ListNode *real = r1_0;
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

TEST(Solution, SimpleTest5){
	Solution solution;
	ListNode *l1_0 = new ListNode(1, new ListNode(2));

	ListNode *r1_0 = new ListNode(2, new ListNode(1));

	ListNode *pred = solution.reverseKGroup(l1_0, 2);
	bool res = true;
	ListNode *real = r1_0;
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