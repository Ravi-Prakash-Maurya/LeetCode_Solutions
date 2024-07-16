class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int x = -1;
        int left = 0, right = accumulate(nums.begin(), nums.end(), 0) - nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if(left == right) {
                x = i;
                break;
            }
            left += nums[i];
            if (i + 1 < nums.size()) right -= nums[i + 1];
        }
        return x;
    }
};