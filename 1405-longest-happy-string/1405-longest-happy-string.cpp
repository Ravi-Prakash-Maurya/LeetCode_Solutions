class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> q;
        if(a > 0) q.push({a, 'a'});
        if(b > 0) q.push({b, 'b'});
        if(c > 0) q.push({c, 'c'});
        string s;
        while(!q.empty()) {
            auto [n1, c1] = q.top();
            q.pop();
            if(s.size() >= 2 && s.back() == c1 && s[s.size() - 2] == c1) {
                if(q.empty()) break;
                auto [n2, c2] = q.top();
                q.pop();
                s += c2;
                if(--n2 > 0) q.push({n2, c2});
                q.push({n1, c1});
            } else {
                s += c1;
                if(--n1 > 0) q.push({n1, c1});
            }
        }
        return s;
    }
};