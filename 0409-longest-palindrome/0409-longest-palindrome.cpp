class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(char c : s) m[c]++;
        int x = 0, y = 0;
        for(auto a : m)
            if(a.second % 2 == 0) x += a.second;
            else y += a.second - 1;
        if(x == s.size()) return x;
        else return x + y + 1;
    }
};