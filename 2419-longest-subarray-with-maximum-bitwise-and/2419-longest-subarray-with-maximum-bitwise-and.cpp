class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end()), x = 0, c = 0;
        for(int i = 0; i < nums.size(); i++) nums[i] == m ? c++ : c = 0, x = max(x, c);
        return x;
    }
};