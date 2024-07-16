class Solution {
public:
    int subtractProductAndSum(int n) {
        int x = 1, y = 0, z = 0;
        while(n > 0)
        {
            z = n % 10;
            x = x * z;
            y = y + z;
            n = n / 10;
        }
        return x - y;
    }
};