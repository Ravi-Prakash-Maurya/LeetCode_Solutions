class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> vec(2, 0);
        vector<bool> v(n * m, false);
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
                v[grid[i][j] - 1] ? vec[0] = grid[i][j] : v[grid[i][j] - 1] = true;
        for(int i = 0; i < v.size(); i++) if(!v[i] && vec[1] == 0) vec[1] = i + 1;
        return vec;
    }
};