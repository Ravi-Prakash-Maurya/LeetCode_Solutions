class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int x = 0, c = 0, t = 0;
        sort(s.rbegin(), s.rend());
        for(int i : s) {
            c += i;
            t += c;
            if(t > x) x = t;
        }
        return x;
    }
};