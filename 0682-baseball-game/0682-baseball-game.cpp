class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(auto c : operations) {
            if(c == "C") s.pop();
            else if(c == "D") s.push(s.top() * 2);
            else if(c == "+") {
                int t = s.top(), ts = s.top();
                s.pop();
                ts += s.top();
                s.push(t);
                s.push(ts);
            } else s.push(stoi(c));
        }
        int x = 0;
        while (!s.empty()) {
            x += s.top();
            s.pop();
        }
        return x;
    }
};