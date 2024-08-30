class Solution {
public:
    string sortSentence(string s) {
        istringstream i(s);
        string w, ans;
        vector<string> vec(9);
        while(i >> w) vec[w[w.size() - 1] - '1'] = w.substr(0, w.size() - 1);
        for(auto a : vec) if(!a.empty()) ans += a + " ";
        ans.pop_back();
        return ans;
    }
};