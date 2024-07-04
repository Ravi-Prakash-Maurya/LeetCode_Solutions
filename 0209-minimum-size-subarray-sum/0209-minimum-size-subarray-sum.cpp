class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int x = INT_MAX, i = 0, j = 0, s = 0;
        while(i < nums.size()) {
            s += nums[i++];
            while(s >= t) {
                x = min(x, i - j);
                s -= nums[j++];
            }
        }
        return x == INT_MAX ? 0 : x;
    }
};