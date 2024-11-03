class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        string d = s + s;
        return d.find(goal) != string::npos;
    }
};