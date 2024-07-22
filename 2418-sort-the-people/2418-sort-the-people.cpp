class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair<int, string>> vec;
        for(int i = 0; i < names.size(); i++) {
            vec.push_back({heights[i], names[i]});
        }
        sort(vec.rbegin(), vec.rend());
        for(auto p : vec) ans.push_back(p.second);
        return ans;
    }
};