class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x = columnNumber, y = 0;
        string s = "";
        while(x) {
            y = x % 26;
            x = x / 26;
            if(y == 0)
            {
                s += 'Z';
                x -= 1;
            }
            else
                s += 'A' + y - 1;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
