class Solution {
public:
    string binaryone(string t) {
        int carry = 1;
        for (int i = t.size() - 1; i >= 0; --i) {
            int sum = (t[i] - '0') + carry;
            t[i] = (sum % 2) + '0';
            carry = sum / 2;
            if (carry == 0) break;
        }
        if (carry == 1) t.insert(t.begin(), '1');
        return t;
    }
    int numSteps(string s) {
        int x = 0;
        while(s.size() != 1) {
            if(s.back() == '0') s.pop_back();
            else s = binaryone(s);
            x++;
        }
        return x;
    }
};