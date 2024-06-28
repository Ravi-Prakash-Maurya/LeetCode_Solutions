class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s = strs[0];
        for(auto &t : strs)
            for(int j = 0; j < s.size(); j++) 
                if(s[j] != t[j]) s.erase(j);
        return s;
    }
};