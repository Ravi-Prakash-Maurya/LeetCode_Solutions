class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> vec = {"0", "1"};
        for (int i = 2; i <= n; i++) {
            vector<string> v;
            for (string s : vec) {
                v.push_back(s + "1");
                if (s.back() == '1') v.push_back(s + "0");
            }
            vec = v;
        }
        return vec;
    }
};