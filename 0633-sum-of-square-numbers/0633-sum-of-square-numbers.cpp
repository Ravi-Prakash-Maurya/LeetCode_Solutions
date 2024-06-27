class Solution {
public:
    bool judgeSquareSum(int c) {
        long long x = 0, y = (long long)sqrt(c);
        while (x <= y) {
            long long k = x * x + y * y;
            if (k == c) return true;
            else if (k > c) y--;
            else x++;
        }
        return false;
    }
};