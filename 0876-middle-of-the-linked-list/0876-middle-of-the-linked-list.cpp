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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int c = 0;
        while(curr != nullptr) {
            c++;
            curr = curr->next;
        }
        c /= 2;
        ListNode* ans = head;
        while(c--) ans = ans->next;
        return ans;
    }
};
