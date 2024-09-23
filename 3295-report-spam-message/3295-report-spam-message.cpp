class Solution {
public:
    bool reportSpam(vector<string> &message, vector<string> &bannedWords) {
        unordered_set<string> s(bannedWords.begin(), bannedWords.end());
        int x = 0;
        for (string m : message) if (s.find(m) != s.end()) x++;
        return x >= 2 ? true : false;
    }
};