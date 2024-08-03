class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int x = 0, y = 0;
        for (const auto& row : grid) {
            int f = 0;
            for (int i = 0; i < grid[0].size() / 2; ++i) {
                if (row[i] != row[grid[0].size() - 1 - i]) {
                    f++;
                }
            }
            x += f;
        }
        for (int j = 0; j < grid[0].size(); ++j) {
            int f = 0;
            for (int i = 0; i < grid.size() / 2; ++i) {
                if (grid[i][j] != grid[grid.size() - 1 - i][j]) {
                    f++;
                }
            }
            y += f;
        }
        return min(x, y);
    }
};