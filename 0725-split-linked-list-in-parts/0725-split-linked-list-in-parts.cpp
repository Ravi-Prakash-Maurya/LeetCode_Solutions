class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr);
        int n = 0;
        ListNode* curr = head;
        while (curr) {
            n++;
            curr = curr->next;
        }
        int x = n / k, m = n % k;
        curr = head;
        for (int i = 0; i < k && curr; i++) {
            result[i] = curr;
            int part_size = x + (m-- > 0 ? 1 : 0);
            for (int j = 1; j < part_size && curr; j++) curr = curr->next;
            if (curr) {
                ListNode* node = curr->next;
                curr->next = nullptr;
                curr = node;
            }
        }
        return result;
    }
};