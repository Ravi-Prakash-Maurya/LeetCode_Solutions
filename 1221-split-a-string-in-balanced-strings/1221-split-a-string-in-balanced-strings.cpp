class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0, x = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'L') l++;
            else r++;
            if(l == r) x++;
        }
        return x;
    }
};