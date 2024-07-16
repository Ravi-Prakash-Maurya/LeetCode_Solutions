class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c : s)
            if(!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        string t;
        while(!st.empty()) {
            t = st.top() + t;
            st.pop();
        }
        return t;
    }
};