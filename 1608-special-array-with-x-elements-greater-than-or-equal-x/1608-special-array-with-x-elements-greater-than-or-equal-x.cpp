class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int x = 1; x <= n; ++x) {
            int count = n - (lower_bound(nums.begin(), nums.end(), x) - nums.begin());
            if (count == x) return x;
        }
        return -1;
    }
};