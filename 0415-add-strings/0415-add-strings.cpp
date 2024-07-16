class Solution {
public:
    string addStrings(string s, string t) {
        int carry = 0, x = s.size(), y = t.size();
        if(x < y) s.insert(0,  abs(x - y), '0');
        else if(x >= y) t.insert(0,  abs(x - y), '0');
        for (int i = s.size() - 1; i >= 0; --i) {
            int sum = (s[i] - '0') + (t[i] - '0') + carry;
            s[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        if (carry == 1) s.insert(s.begin(), '1');
        return s;
    }
};