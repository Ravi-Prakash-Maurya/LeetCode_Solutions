class Solution {
public:
    bool doesAliceWin(string s) {
        for(char c : s) if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
        return 0;
    }
};
