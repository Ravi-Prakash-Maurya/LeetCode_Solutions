class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& p, vector<int>& q) {
        sort(p.begin(), p.end());
        for(int i = 1; i < p.size(); i++) p[i][1] = max(p[i][1], p[i - 1][1]);
        vector<pair<int, int>> v;
        for(int i = 0 ; i < q.size(); i++) v.push_back({q[i], i});
        sort(v.begin(),v.end());
        int j = 0, x = 0;
        for(int i = 0; i < q.size(); i++) {
            while(j < p.size() && p[j][0] <= v[i].first) x = max(x, p[j][1]), j++;
            q[v[i].second] = x;
        }
        return q;
    }
};