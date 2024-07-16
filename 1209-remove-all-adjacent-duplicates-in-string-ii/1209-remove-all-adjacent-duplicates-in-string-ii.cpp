class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(char c : s) {
            if(!st.empty() && st.top().first == c) {
                st.top().second++;
                if(st.top().second == k) st.pop();
            } else st.push({c, 1});
        }
        string t;
        while(!st.empty()) {
            auto p = st.top();
            t.append(p.second, p.first);
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};