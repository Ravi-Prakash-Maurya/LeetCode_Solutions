class Solution {
public:
    int minChanges(string s) {
        vector<int> v;
        int c = 1, x = 0, f = 0;
        for(int i = 1; i < s.size(); i++) s[i] == s[i - 1] ? c++ : (v.push_back(c), c = 1);
        v.push_back(c);
        for(int i = 0; i < v.size(); i++) if(v[i] % 2 || f) v[i] % 2 && f ? f = 0 : (f = 1, x++);
        return x;
    }
};
