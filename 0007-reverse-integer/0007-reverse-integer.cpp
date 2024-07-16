class Solution {
public:
    int reverse(int n) {
        int x = 0;
        while (n != 0) {
            if (x > INT_MAX / 10 || (x == INT_MAX / 10 && (n % 10) > 7)) return 0;
            if (x < INT_MIN / 10 || (x == INT_MIN / 10 && (n % 10) < -8)) return 0;
            x = (x * 10) + (n % 10);
            n /= 10;
        }
        return x;
    }
};