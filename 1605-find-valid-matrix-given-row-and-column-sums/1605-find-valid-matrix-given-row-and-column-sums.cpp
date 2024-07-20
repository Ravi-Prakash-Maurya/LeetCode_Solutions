class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> vec(rowSum.size(), vector<int>(colSum.size()));
        for (int i = 0; i < rowSum.size(); i++) {
            for (int j = 0; j < colSum.size(); j++) {
                int m = min(rowSum[i], colSum[j]);
                vec[i][j] = m;
                rowSum[i] -= m;
                colSum[j] -= m;
            }
        }
        return vec;
    }
};
