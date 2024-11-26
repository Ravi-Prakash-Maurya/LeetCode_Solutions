class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> v(n, 0);
        for(auto p : edges) v[p[1]]++;
        int c = 0, x = 0;
        for(int i = 0; i < n; i++) if(v[i] == 0) c++, x = i;
        return c > 1 ? -1 : x;
    }
};