class Solution {
public:
    int d(string s, string t) {
        int h1 = stoi(s.substr(0, 2)), m1 = stoi(s.substr(3, 2));
        int h2 = stoi(t.substr(0, 2)), m2 = stoi(t.substr(3, 2));
        int n = abs((h1 * 60 + m1) - (h2 * 60 + m2));
        return min(n, 1440 - n);
    }
    int findMinDifference(vector<string>& t) {
        sort(t.begin(), t.end());
        int x = INT_MAX;
        for(int i = 1; i < t.size(); i++) x = min(x, d(t[i - 1], t[i]));
        x = min(x, d(t[0], t.back()));
        return x;
    }
};
