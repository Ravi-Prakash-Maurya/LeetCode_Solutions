class neighborSum {
public:
    neighborSum(vector<vector<int>>& grid) {
        this->grid = grid;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid.size(); j++)
                m[grid[i][j]] = {i, j};
    }
    int adjacentSum(int value) {
        int sum = 0, x = m[value].first, y = m[value].second, n = grid.size();
        vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto d : dir) {
            int X = x + d.first, Y = y + d.second;
            if (X >= 0 && X < n && Y >= 0 && Y < n) sum += grid[X][Y];
        }
        return sum;
    }
    int diagonalSum(int value) {
        int sum = 0, x = m[value].first, y = m[value].second, n = grid.size();
        vector<pair<int, int>> dir = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        for (auto d : dir) {
            int X = x + d.first, Y = y + d.second;
            if (X >= 0 && X < n && Y >= 0 && Y < n) sum += grid[X][Y];
        }
        return sum;
    }
private:
    vector<vector<int>> grid;
    unordered_map<int, pair<int, int>> m;
};
/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */