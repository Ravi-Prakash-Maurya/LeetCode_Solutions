class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<pair<int, int>> vec(g.size());
        vector<vector<int>> ans;
        for(int i = 0; i < g.size(); i++) vec[i] = {g[i], i};
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size(); i++) {
            vector<int> x;
            int n = 0;
            for(int j = i; j < vec[i].first + i; j++) {
                x.push_back(vec[j].second);
                n = j;
            }
            i = n;
            ans.push_back(x);
        }
        return ans;
    }
};