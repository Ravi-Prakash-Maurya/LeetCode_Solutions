class Solution {
public:
    bool judgeSquareSum(int c) {
        int x = 0, y = (int)sqrt(c);
        while (x <= y) {
            int k = x * x + y * y;
            if (k == c) return true;
            else if (k > c) y--;
            else x++;
        }
        return false;
    }
};