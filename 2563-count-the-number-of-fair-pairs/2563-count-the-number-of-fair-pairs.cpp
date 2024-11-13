class Solution {
public:
    long long countFairPairs(vector<int>& nums, int l, int u) {
        sort(nums.begin(), nums.end());
        long long x = 0;
        for(int i = 0; i < nums.size(); i++) {
            int s = lower_bound(nums.begin() + i + 1, nums.end(), l - nums[i]) - nums.begin();
            int e = upper_bound(nums.begin() + i + 1, nums.end(), u - nums[i]) - nums.begin();
            x += (e - s);
        }
        return x;
    }
};