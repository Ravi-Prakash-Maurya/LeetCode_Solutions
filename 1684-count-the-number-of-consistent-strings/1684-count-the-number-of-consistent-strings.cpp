class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int x = words.size();
        set<char> s;
        for(char c : allowed) s.insert(c);
        for(auto q : words)
            for(auto c : q)
                if(s.find(c) == s.end()) {
                    x--;
                    break;
                }
        return x;
    }
};