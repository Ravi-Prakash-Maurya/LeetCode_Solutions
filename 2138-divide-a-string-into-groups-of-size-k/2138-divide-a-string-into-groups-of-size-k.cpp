class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        for (int i = 0; i < s.size(); i += k) {
            string t = s.substr(i, k);
            if(t.size() < k) t.append(k - t.size(), fill);
            v.push_back(t);
        }
        return v;
    }
};