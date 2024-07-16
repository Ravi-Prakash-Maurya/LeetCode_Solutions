class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int x, y;
        vector<int> vec;
        for(string s : tokens) {
            if(s == "+" || s == "-" || s == "*" || s == "/") {
                x = vec.back();
                vec.pop_back();
                y = vec.back();
                vec.pop_back();
                if (s == "+") vec.push_back(y + x);
                else if (s == "-") vec.push_back(y - x);
                else if (s == "*") vec.push_back(y * x);
                else if (s == "/")
                    if (x != 0) vec.push_back(y / x);
                    else vec.push_back(0);
            } else vec.push_back(stoi(s));
        }
        return vec.back();
    }
};