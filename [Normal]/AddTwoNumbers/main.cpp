#include <iostream>

using std::cout;
using std::endl;
using std::pow;


class ListNode {
public:
	int val;
	ListNode* next;

public:
	static void fillList(ListNode*& list, const std::initializer_list<int> nums) {
		ListNode* head = nullptr;
		ListNode* prev = nullptr;

		for (const long int& num : nums) {
			ListNode* newNode = new ListNode(num);
			if (head == nullptr) {
				head = newNode;
			}
			else {
				prev->next = newNode;
			}
			prev = newNode;
		}
		list = head;
	}


	ListNode(int p_val) {
		val = p_val;
		next = nullptr;
	}
};


class Solution {
public:
	static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* head = new ListNode(0);
		ListNode* curr = head;

		int carry = 0, sum = 0;
		while (l1 != nullptr || l2 != nullptr) {
			sum = carry;
			if (l1 != nullptr) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2 != nullptr) {
				sum += l2->val;
				l2 = l2->next;
			}
			carry = sum / 10;
			sum = sum % 10;
			curr->next = new ListNode(sum);
			curr = curr->next;
		}
		if (carry == 1)
			curr->next = new ListNode(1);
		curr = head;
		head = head->next;
		delete curr;
		return head;
	}
};


int main() {

	ListNode* l1, *l2;
    ListNode::fillList(l1, { 9, 9, 9, 9, 9, 9, 9 });
    ListNode::fillList(l2, { 9, 9, 9, 9 });
	ListNode* list = Solution::addTwoNumbers(l1, l2);
    while (list != nullptr) {
        cout << list->val << " ";
        list = list->next;
    }

	return 0;
}