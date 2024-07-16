class Solution {
public:
    string thousandSeparator(int n) {
        string s = "";
        int i = 0;
        if(n == 0) s = "0";
        while(n) {
            if(i % 3 == 0 && i != 0) s = '.' + s;
            char c = (n % 10) + '0';
            s = c + s;
            n /= 10;
            i++;
        }
        return s;
    }
};