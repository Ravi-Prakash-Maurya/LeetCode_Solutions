class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> m;
        for(char c : s) m[c]++;
        int x = 0;
        for(auto p : m) {
            x += (p.second - 1) % 2;
            x++;
        }
        return x;
    }
};
