class Solution {
public:
    vector<int> missingRolls(vector<int>& r, int m, int n) {
        int t = r.size() + n, s = accumulate(r.begin(), r.end(), 0), a = m * t - s, i = 0;
        if(a < n || a > n * 6) return vector<int>();
        vector<int> vec(n, 1);
        a -= n;
        while(a > 0) {
            if(a > 5) vec[i++] += 5;
            else vec[i++] += a;
            a -= 5;
        }
        return vec;
    }
};