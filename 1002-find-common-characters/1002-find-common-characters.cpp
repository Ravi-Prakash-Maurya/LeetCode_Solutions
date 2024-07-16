class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> vec(26, INT_MAX);
        for(const string& word : words) {
            vector<int> ch(26, 0);
            for(char c : word) ch[c - 'a']++;
            for(int i = 0; i < 26; i++) vec[i] = min(vec[i], ch[i]);
        }
        vector<string> result;
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < vec[i]; j++)
                result.push_back(string(1, i + 'a'));
        return result;
    }
};
