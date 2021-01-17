#include <gtest/gtest.h>
#include "merge-k-sorted-lists.hpp"

TEST(Solution, SimpleTest1){
	vector<ListNode*> in;
	Solution solution;
	ASSERT_EQ(solution.mergeKLists(in), nullptr);
}

TEST(Solution, SimpleTest2){
	vector<ListNode*> in{nullptr};
	Solution solution;
	ASSERT_EQ(solution.mergeKLists(in), nullptr);
}

TEST(Solution, SimpleTest3){
	ListNode *l1_1 = new ListNode(4, new ListNode(5));
	ListNode *l1_0 = new ListNode(1, l1_1);

	ListNode *l2_1 = new ListNode(3, new ListNode(4));
	ListNode *l2_0 = new ListNode(1, l2_1);

	ListNode *l3_0 = new ListNode(2, new ListNode(6));

	vector<ListNode*> in{l1_0, l2_0, l3_0};

	ListNode *r_1 = new ListNode(5, new ListNode(6));
	ListNode *r_2 = new ListNode(4, r_1);
	ListNode *r_3 = new ListNode(4, r_2);
	ListNode *r_4 = new ListNode(3, r_3);
	ListNode *r_5 = new ListNode(2, r_4);
	ListNode *r_6 = new ListNode(1, r_5);
	ListNode *r_7 = new ListNode(1, r_6);

	Solution solution;
	ListNode *pred = solution.mergeKLists(in);
	bool res = true;
	ListNode *real = r_7;
	while(pred != nullptr || real != nullptr ){
		//cout << "pred: " << pred->val << endl;
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
