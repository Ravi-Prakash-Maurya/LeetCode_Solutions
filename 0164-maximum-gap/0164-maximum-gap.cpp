class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        sort(nums.begin(), nums.end());
        int x = 0;
        for(int i = 0; i < nums.size() - 1; i++) x = max(x, nums[i  + 1] - nums[i]);
        return x;
    }
};