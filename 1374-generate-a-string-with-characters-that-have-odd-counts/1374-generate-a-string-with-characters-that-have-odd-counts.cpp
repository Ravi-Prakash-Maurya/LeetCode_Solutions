class Solution {
public:
    string generateTheString(int n) {
        string s;
        if(n % 2) s = string(n, 'a');
        else s = string(1, 'a') + string(n - 1, 'b');
        return s;
    }
};