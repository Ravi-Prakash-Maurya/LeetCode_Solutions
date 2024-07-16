class Solution {
public:
    int arrangeCoins(int n) {
        long x = 1;
        int count = 0;
        while(n > 0)
        {
            n = n - x;
            x++;
            count++;
            if(n < 0)
            {
                count--;
            }
        }
        return count;
    }
};