class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char c) {
        vector<string> v;
        for(string s : words) {
            stringstream ss(s);
            string x;
            while(getline(ss, x, c)) if(!x.empty()) v.push_back(x);
        }
        return v;
    }
};