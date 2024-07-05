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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* x = new ListNode(0);
        x->next = head;
        ListNode* prev = x;
        ListNode* current = head;
        while (current != nullptr) {
            if (current->val == val) {
                prev->next = current->next;
                delete current;
            } else prev = current;
            current = prev->next;
        }
        ListNode* newHead = x->next;
        delete x;
        return newHead;
    }
};
