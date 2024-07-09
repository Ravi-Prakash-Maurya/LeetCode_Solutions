class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool n = num < 0;
        num = abs(num);
        string s;
        while(num) {
            char c = (num % 7) + '0';
            s = c + s;
            num /= 7;
        }
        return n ? '-' + s : s;
    }
};