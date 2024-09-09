class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> vec(m, vector<int>(n, -1));
        int t = 0, b = m - 1, l = 0, r = n - 1;
        ListNode* curr = head;
        while (curr && t <= b && l <= r) {
            for (int i = l; i <= r && curr; ++i) vec[t][i] = curr->val, curr = curr->next;
            t++;
            for (int i = t; i <= b && curr; ++i) vec[i][r] = curr->val, curr = curr->next;
            r--;
            for (int i = r; i >= l && curr; --i) vec[b][i] = curr->val, curr = curr->next;
            b--;
            for (int i = b; i >= t && curr; --i) vec[i][l] = curr->val, curr = curr->next;
            l++;
        }
        return vec;
    }
};