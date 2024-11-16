class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int x = -1, n = s.size() - 1;
        for(int i = 0; i < n; i++) for(int j = n; j > i; j--) if(s[i] == s[j]) x = max(x, j - i - 1);
        return x;
    }
};