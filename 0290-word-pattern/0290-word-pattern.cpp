class Solution {
public:
    bool wordPattern(string p, string s) {
        stringstream t(s);
        unordered_map<char, string> c;
        unordered_map<string, char> w;
        string word;
        int i = 0;
        while(t >> word) {
            w[word] = p[i];
            c[p[i]] = word;
            i++;
        }
        string sen = "", wo = "";
        t.clear();
        t.str(s);
        i = 0;
        while(t >> word) {
            wo += w[word];
            sen += c[p[i]];
            sen += " ";
            i++;
        }
        sen.pop_back();
        if(wo == p && sen == s) return true;
        return false;
    }
};