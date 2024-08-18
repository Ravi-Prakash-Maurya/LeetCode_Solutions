class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int x = 0, j = 0, z = 0, o = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') z++;
            else o++;
            while (z > k && o > k) {
                if (s[j] == '0') z--;
                else o--;
                j++;
            }
            x += i - j + 1;
        }
        return x;
    }
};