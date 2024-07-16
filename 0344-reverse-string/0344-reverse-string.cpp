class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> t;
        s = r(s, t, 0);
    }
    vector<char> r(vector<char>& m, vector<char>& t, int x) {
        if (x >= m.size())
            return t;
        t.insert(t.begin(), m[x]);
        return r(m, t, x + 1);
    }
};