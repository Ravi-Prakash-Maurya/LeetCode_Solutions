class Solution {
public:
    string replaceWords(vector<string>& d, string sen) {
        unordered_set<string> dict(d.begin(), d.end());
        string s = "";
        istringstream iss(sen);
        string word;
        while (iss >> word) {
            string t = "";
            bool found = false;
            for (char c : word) {
                t += c;
                if (dict.find(t) != dict.end()) {
                    s += t + ' ';
                    found = true;
                    break;
                }
            }
            if (!found) s += word + ' ';
        }
        if (!s.empty()) s.pop_back();
        return s;
    }
};
