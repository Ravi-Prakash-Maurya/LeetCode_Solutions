/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* c1 = list1;
        ListNode* c2 = list2;
        ListNode* x = new ListNode(0);
        ListNode* y = x;
        while(c1 && c2) {
            if(c1->val < c2->val) {
                x->next = c1;
                c1 = c1->next;
                x = x->next;
            } else if(c2->val <= c1->val) {
                x->next = c2;
                c2 = c2->next;
                x = x->next;
            }
        }
        if(c1) x->next = c1;
        else if(c2) x->next = c2;
        return y->next;
    }
};