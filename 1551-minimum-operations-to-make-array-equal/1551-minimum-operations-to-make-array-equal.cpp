class Solution {
public:
    int minOperations(int n) {
        int x, y = (2 * (n - 1)) + 1 - n;
        if(n % 2 == 0) x = (((1 + y) * n) / 2) / 2;
        else x = ((2 + y) * ((n - 1) / 2) / 2);
        return x;
    }
};