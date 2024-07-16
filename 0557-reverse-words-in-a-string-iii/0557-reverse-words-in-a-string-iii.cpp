class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, ans;
        while (iss >> word) {
            reverse(word.begin(), word.end());
            ans = ans + word + " ";
        }
        ans.erase(ans.size() - 1);
        return ans;
    }
};