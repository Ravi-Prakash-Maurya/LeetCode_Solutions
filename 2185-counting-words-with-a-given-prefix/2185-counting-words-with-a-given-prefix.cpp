class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int x = 0;
        for(auto s : words) if(s.substr(0, pref.size()) == pref) x++;
        return x;
    }
};