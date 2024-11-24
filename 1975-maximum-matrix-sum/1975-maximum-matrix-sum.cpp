class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& v) {
        long long x = 0;
        int n = v.size(), m = v[0].size(), o = 0, a = INT_MAX;
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) x += abs(v[i][j]), a = min(a, abs(v[i][j])), o += v[i][j] < 0 ? 1 : 0;
        return o % 2 ? (x - 2 * a) : x;
    }
};