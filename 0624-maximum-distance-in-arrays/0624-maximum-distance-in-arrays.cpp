class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int a = arrays[0][0], b = arrays[0].back(), x = 0;
        for (int i = 1; i < arrays.size(); i++) {
            x = max({x, abs(arrays[i].back() - a), abs(b - arrays[i][0])});
            a = min(a, arrays[i][0]);
            b = max(b, arrays[i].back());
        }
        return x;
    }
};
