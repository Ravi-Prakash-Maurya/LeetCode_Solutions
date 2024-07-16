class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_map<char,char> r; // Reverse mapping
        for(int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) == m.end()) {
                m[s[i]] = t[i];
                if (r.find(t[i]) != r.end() && r[t[i]] != s[i])
                    return false;
                r[t[i]] = s[i];
            }
            else
                if (m[s[i]] != t[i])
                    return false;
        }
        return true;
        // unordered_map<char,char> m;
        // for(int i = 0; i < s.size(); i++)
        // {
        //     m[s[i]] = t[i];
        // }
        // string q;
        // string w;
        // for(int i = 0; i < s.size(); i++)
        // {
        //     q.push_back(m[s[i]]);
        // }
        // return q == t ? true : false;
    }
};