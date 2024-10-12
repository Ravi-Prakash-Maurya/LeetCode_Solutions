class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        for(int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            for(int j = 0; j <= x; j++) {
                if((j | (j + 1)) == x) {
                    ans[i] = j;
                    break;
                }
            }
        }
        return ans;
    }
};