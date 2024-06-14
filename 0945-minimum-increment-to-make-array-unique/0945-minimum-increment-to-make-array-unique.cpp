class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int x = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                x++;
                nums[i + 1]++;
            } else if(nums[i] > nums[i + 1]) {
                x += nums[i] - nums[i + 1] + 1;
                nums[i + 1] = nums[i] + 1;
            }
        }
        return x;
    }
};