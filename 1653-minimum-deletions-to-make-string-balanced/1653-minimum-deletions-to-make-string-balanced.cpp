class Solution {
public:
    int minimumDeletions(string s) {
        int x = 0;
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == 'b' && c == 'a') {
                st.pop();
                x++;
            } else st.push(c);
        }
        return x;
    }
};