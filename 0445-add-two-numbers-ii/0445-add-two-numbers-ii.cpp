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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::stack<int> s1, s2;
        // Push digits of l1 onto stack s1
        while (l1) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        // Push digits of l2 onto stack s2
        while (l2) {
            s2.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        ListNode* result = nullptr;
        // While either stack is not empty or there's a carry
        while (!s1.empty() || !s2.empty() || carry) {
            int sum = carry;
            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            carry = sum / 10;
            sum %= 10;    
            // Create a new node with sum as its value
            ListNode* newNode = new ListNode(sum);
            newNode->next = result;
            result = newNode;
        }
        return result;
    }
};
