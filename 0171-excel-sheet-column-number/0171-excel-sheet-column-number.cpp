class Solution {
public:
    int titleToNumber(string c) {
        int x = 0;
        for(int i = 0; i < c.size(); i++)
            x += (c[i] - 64)*pow(26,(c.size() - i - 1));
        return x;   
    }
};