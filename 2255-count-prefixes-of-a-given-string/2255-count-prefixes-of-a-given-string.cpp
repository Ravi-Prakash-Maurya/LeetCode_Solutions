class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int x = 0;
        for (auto w : words) if (s.substr(0, w.size()) == w) x++;
        return x;
    }
};