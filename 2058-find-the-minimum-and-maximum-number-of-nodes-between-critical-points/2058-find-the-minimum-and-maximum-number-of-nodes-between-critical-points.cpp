/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x, next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> vec;
        int t = 1, x = INT_MAX, a, b, c;
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;
        while (next != nullptr) {
                a = prev->val, b = curr->val, c = next->val;
                if ((b > a && b > c) || (b < a && b < c)) vec.push_back(t);
            prev = curr, curr = next, next = next->next, t++;
        }
        if (vec.size() < 2) return {-1, -1};
        for (int i = 1; i < vec.size(); i++) x = min(x, vec[i] - vec[i - 1]);
        return {x, vec.back() - vec.front()};
    }
};
