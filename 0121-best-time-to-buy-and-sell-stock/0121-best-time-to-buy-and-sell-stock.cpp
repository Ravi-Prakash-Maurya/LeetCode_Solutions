class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, x = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            x = min(x, prices[i]);
            p = max(p, prices[i] - x);
        }
        return p;
    }
};