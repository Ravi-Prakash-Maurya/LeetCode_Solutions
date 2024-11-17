class Solution {
public:
    string makeGood(string s) {
        string st;
        for(char c : s) 
            if(!st.empty() && abs(st.back() - c) == 32) st.pop_back();
            else st.push_back(c);
        return st;
    }
};