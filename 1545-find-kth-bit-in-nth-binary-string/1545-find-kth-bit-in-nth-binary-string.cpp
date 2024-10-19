class Solution {
public:
    string make(int i) {
        if(i == 1) return "0";
        string s = make(i - 1), t(s.rbegin(), s.rend());
        for (char& c : t) c = (c == '0') ? '1' : '0';
        return s + "1" + t;
    }
    char findKthBit(int n, int k) {
        string s = make(n);
        return s[k - 1];
    }
};