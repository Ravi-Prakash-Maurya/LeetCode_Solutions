class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> t(3, 0), f(3, 0);
        for(char c : s) t[c - 'a']++;
        if(t[0] < k || t[1] < k || t[2] < k) return -1;
        int n = s.size(), l = 0, x = 0;
        for (int r = 0; r < n; r++) {
            f[s[r] - 'a']++;
            while(f[0] > t[0] - k || f[1] > t[1] - k || f[2] > t[2] - k) f[s[l] - 'a']--, l++;
            x = max(x, r - l + 1);
        }
        return n - x;
    }
};