class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> m;
        vector<string> vec;
        for(auto &s : cpdomains) {
            int x = 0;
            for(char &c : s) {
                if(c >= 48 && c <= 57) x = (x * 10) + (c - '0');
                else break;
            }
            string t = "";
            for(int i = s.size() - 1; i >= 0; i--) {
                if(s[i] >= 97 && s[i] <= 122) t = s[i] + t;
                else if(s[i] == '.') {
                    m[t] += x;
                    t = s[i] + t;
                } else if(s[i] == ' ') {
                    m[t] += x;
                    break;
                }
            }
        }
        for(auto &pair : m) {
            string p = to_string(pair.second);
            string t = "";
            t += p;
            t += " ";
            t += pair.first;
            vec.push_back(t);
        }
        return vec;
    }
};