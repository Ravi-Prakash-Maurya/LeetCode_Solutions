class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> vec(s.size());
        for(int i = 0; i < s.size(); i++) vec[i] = {indices[i], s[i]};
        string t;
        sort(vec.begin(), vec.end());
        for(auto p : vec) t += p.second;
        return t;
    }
};