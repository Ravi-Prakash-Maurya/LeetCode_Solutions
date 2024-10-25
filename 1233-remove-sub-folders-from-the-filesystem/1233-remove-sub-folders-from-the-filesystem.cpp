class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> v;
        string s = "";
        for(auto f : folder) {
            if(s.empty() || f.substr(0, s.size()) != s || f[s.size()] != '/') {
                v.push_back(f), s = f;
            }
        }
        return v;
    }
};