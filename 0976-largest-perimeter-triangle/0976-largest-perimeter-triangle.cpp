class Solution {
public:
    int largestPerimeter(std::vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int n = nums.size();
        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] < nums[i+1] + nums[i+2]) {
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};
