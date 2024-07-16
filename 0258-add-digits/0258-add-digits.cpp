class Solution {
public:
    int addDigits(int num) {
        int x = num%9;
        if(x == 0 && num != 0)
        {
            x=9;
        }
        return x;
    }
};