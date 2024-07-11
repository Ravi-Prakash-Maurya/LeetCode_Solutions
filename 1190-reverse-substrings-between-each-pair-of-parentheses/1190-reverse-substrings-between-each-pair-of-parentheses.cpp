class Solution {
public:
    string rev(string& s) {
        string t;
        for(char c : s) t = c + t;
        return t;
    }
    string reverseParentheses(string s) {
        stack<string> t;
        string q;
        for(char c : s) {
            if(c == '(') {
                t.push(q);
                q = "";
            } else if(c == ')') {
                q = t.top() + rev(q);
                t.pop();
            } else q += c;
        }
        return q;
    }
};