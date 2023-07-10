#include <iostream>

using std::cout;
using std::endl;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int p_val) {
        val = p_val;
        next = nullptr;
    }
    ListNode(int p_val, ListNode* p_next) {
        val = p_val;
        next = p_next;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* head = list1;
        if (list1->val > list2->val) {
            head = list2;
            list2 = list2->next;
        }
        else list1 = list1->next;

        ListNode* p_head = head;

        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val) {
                p_head->next = list1;
                list1 = list1->next;
            }
            else {
                p_head->next = list2;
                list2 = list2->next;
            }
            p_head = p_head->next;

        }

        if (list1 == nullptr) p_head->next = list2;
        else p_head->next = list1;

        return head;
    }
};

int main()
{
	
	return 0;
}

