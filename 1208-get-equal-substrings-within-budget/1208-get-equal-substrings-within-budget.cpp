class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int j = 0, cost = 0, x = 0;
        for(int i = 0; i < s.size(); i++) {
            cost += abs(s[i] - t[i]);
            while(cost > maxCost) {
                cost -= abs(s[j] - t[j]);
                j++;
            }
            x = max(x, i - j + 1);
        }
        return x;
    }
};