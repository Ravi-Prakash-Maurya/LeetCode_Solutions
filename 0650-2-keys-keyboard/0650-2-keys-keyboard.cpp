class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        int x = 0, sum = 2;
        while (n > 1) {
            while (n % sum == 0) {
                x += sum;
                n /= sum;
            }
            sum++;
        }
        return x;
    }
};