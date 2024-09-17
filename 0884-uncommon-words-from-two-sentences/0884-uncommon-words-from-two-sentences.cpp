class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> vec;
        unordered_map<string, int> m;
        istringstream i1(s1), i2(s2);
        string s;
        while(i1 >> s) m[s]++;
        while(i2 >> s) m[s]++;
        for(auto i : m) if(i.second == 1) vec.push_back(i.first);
        return vec;
    }
};