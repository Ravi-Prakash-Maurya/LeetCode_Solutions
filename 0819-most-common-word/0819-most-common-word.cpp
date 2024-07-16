class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        unordered_map<string, int> m;
        for (int i = p.size() - 1; i >= 0; i--)
            if (ispunct(p[i]))
                p.replace(i, 1, " ");
        istringstream s(p);
        string word, t;
        while (s >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            m[word]++;
        }
        for (auto& n : b) m.erase(n);
        int x = 0;
        for (auto& pair : m)
            if (pair.second > x) {
                x = pair.second;
                t = pair.first;
            }
        return t;
    }
};
