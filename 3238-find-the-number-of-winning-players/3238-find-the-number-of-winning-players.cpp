class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> vec(n);
        for (auto p : pick) vec[p[0]][p[1]]++;
        int x = 0;
        for (int i = 0; i < n; ++i)
            for (auto k : vec[i])
                if (k.second > i) {
                    x++;
                    break;
                }
        return x;
    }
};