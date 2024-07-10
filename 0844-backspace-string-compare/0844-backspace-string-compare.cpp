class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string q, w;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#')
                if(!q.empty()) q.pop_back();
            else q += s[i];
            if(t[i] == '#')
                if(!w.empty()) w.pop_back();
            else w += t[i];
        }
        return q == w ? true : false;
    }
};