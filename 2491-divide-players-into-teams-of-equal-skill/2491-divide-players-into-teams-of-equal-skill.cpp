class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        sort(s.begin(), s.end());
        long long x = 0;
        int n = s.size(), a = s[0] + s[n - 1];
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] + s[n - 1 - i] != a) return -1;
            x += (long long)s[i] * s[n - 1 - i];
        }
        return x;
    }
};
