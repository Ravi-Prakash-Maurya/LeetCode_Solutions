class Solution {
public:
    int minLength(string s) {
        stack<char> t;
        for(char c : s)
            if(!t.empty() && c == 'D' && t.top() == 'C') t.pop();
            else if(!t.empty() && c == 'B' && t.top() == 'A') t.pop();
            else t.push(c);
        return t.size();
    }
};