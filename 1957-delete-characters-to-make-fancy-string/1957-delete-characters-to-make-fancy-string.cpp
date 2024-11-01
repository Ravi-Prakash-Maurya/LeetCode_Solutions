class Solution {
public:
    string makeFancyString(string s) {
        string t;
        for(char c : s) {
            if(t.size() >= 2 && t[t.size() - 1] == c && t[t.size() - 2] == c) continue;
            t += c;
        }
        return t;
    }
};