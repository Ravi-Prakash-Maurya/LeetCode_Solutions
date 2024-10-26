class Solution {
public:
    int percentageLetter(string s, char l) {
        int x = 0;
        for(char c : s) if(c == l) x++;
        return x * 100 / s.size();
    }
};