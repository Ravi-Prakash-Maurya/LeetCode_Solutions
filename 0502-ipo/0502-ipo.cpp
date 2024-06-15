class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++) vec[i] = {capital[i], profits[i]};
        sort(vec.begin(), vec.end());
        int i = 0;
        priority_queue<int> q;
        while (k--) {
            while (i < n && vec[i].first <= w) q.push(vec[i++].second);
            if (q.empty()) break;
            w += q.top();
            q.pop();
        }
        return w;
    }
};