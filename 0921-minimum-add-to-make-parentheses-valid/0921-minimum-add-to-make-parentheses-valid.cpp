class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> t;
        for(char c : s)
            if(!t.empty() && c == ')' && t.top() == '(') t.pop();
            else t.push(c);
        return t.size();
    }
};