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
    int getDecimalValue(ListNode* head) {
        int n = -1, x = 0;
        ListNode* c = head;
        while(c != nullptr) {
            n++;
            c = c->next;
        }
        c = head;
        while(c != nullptr) {
            x += c->val * pow(2, n);
            c = c->next;
            n--;
        }
        return x;
    }
};