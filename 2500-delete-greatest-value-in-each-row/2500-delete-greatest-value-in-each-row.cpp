class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int x = 0, m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) sort(grid[i].begin(), grid[i].end());
        for (int j = 0; j < n; j++) {
            int me = 0;
            for (int i = 0; i < m; i++) me = max(me, grid[i][j]);
            x += me;
        }        
        return x;
    }
};