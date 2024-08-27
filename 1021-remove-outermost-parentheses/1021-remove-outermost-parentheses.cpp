class Solution {
public:
    string removeOuterParentheses(string s) {
        string a = "";
        int x = 0;
        for (char c : s)
            if (c == '(') {
                if (x > 0) a += c;
                x++;
            } else {
                x--;
                if (x > 0) a += c;
            }
        return a;
    }
};