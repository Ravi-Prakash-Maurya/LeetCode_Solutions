class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        int x = 0, n = a.size(), m = q.size();
        vector<int> r(m), v(n);
        for(int i = 0; i < n; i++) x = x ^ a[i], v[i] = x;
        for(int i = 0; i < m; i++) r[i] = v[q[i][1]] ^ (q[i][0] ? v[q[i][0] - 1] : 0);
        return r;
    }
};