class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, ans;
        while(iss >> word) ans = word + " " + ans;
        ans.erase(ans.size() - 1);
        return ans;
    }
};