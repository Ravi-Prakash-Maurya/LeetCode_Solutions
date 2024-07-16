class Solution {
public:
    int binaryGap(int n) {
        int x = 0, i = 0, j = -1;
        while (n != 0) {
            if (n & 1) {
                if (j != -1) x = max(x, i - j);
                j = i;
            }
            n >>= 1;
            i++;
        }
        return x;
    }
};
