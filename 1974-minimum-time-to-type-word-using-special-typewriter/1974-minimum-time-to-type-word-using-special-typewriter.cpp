class Solution {
public:
    int minTimeToType(string word) {
        int x = 0;
        char t = 'a';
        for(char c : word) x += min((c - t + 26) % 26, (t - c + 26) % 26) + 1, t = c;
        return x;
    }
};