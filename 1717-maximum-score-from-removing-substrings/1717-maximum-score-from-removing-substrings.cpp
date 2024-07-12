class Solution {
public:
    int maximumGain(string s, int x, int y) {
        char s1, s2;
        if (x > y) s1 = 'a', s2 = 'b';
        else s1 = 'b', s2 = 'a';
        int sum = 0, ma = max(x, y), mi = min(x, y);
        stack<char> st1, st2;
        for (char c : s) {
            if (!st1.empty() && st1.top() == s1 && c == s2) {
                sum += ma;
                st1.pop();
            } else st1.push(c);
        }
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        while (!st2.empty()) {
            char c = st2.top();
            st2.pop();
            if (!st1.empty() && st1.top() == s2 && c == s1) {
                sum += mi;
                st1.pop();
            } else st1.push(c);
        }
        return sum;
    }
};