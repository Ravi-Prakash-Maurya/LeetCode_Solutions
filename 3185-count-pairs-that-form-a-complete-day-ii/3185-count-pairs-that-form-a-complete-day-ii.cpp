class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, long long> m;
        for(int a : hours) {
            m[a % 24]++;
        }
        long long x = 0;
        for(int i = 0; i < 24; ++i) {
            if (m.find(i) != m.end()) {
                int c = (24 - i) % 24;
                if (c == i) {
                    x += (m[i] * (m[i] - 1)) / 2;
                } else if (m.find(c) != m.end() && i < c) {
                    x += m[i] * m[c];
                }
            }
        }
        return x;
    }
};
