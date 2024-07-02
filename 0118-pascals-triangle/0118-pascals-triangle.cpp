class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i = 0; i < numRows; i++) {
            vector<int> now(i + 1, 1);
            for(int j = 1; j < now.size() - 1; j++) {
                now[j] = vec[i - 1][j - 1] + vec[i - 1][j];
            }
            vec.push_back(now);
        }
        return vec;
    }
};