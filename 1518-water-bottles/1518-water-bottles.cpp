class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int e = 0;
        int x = numBottles;
        int y = numExchange;
        while(x >= y)
        {
            ans += x / y;
            e = x % y;
            x = (x / y) + e;
        }
        return ans;
    }
};