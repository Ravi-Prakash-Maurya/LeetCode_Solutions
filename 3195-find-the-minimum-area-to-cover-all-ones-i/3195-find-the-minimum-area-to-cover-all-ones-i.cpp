class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minx = INT_MAX, miny = INT_MAX, maxx = 0, maxy = 0, x;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    minx = min(minx, j);
                    miny = min(miny, i);
                    maxx = max(maxx, j);
                    maxy = max(maxy, i);
                }
            }
        }
        x = (maxx - minx + 1) * (maxy - miny + 1);
        return x;
    }
};