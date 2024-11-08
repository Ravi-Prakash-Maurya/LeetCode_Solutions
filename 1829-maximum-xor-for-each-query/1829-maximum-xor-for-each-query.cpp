class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int m = (1 << maximumBit) - 1, x = 0;
        for(int i : nums) x ^= i;
        vector<int> v;
        for(int i = nums.size() - 1; i >= 0; i--) v.push_back(m ^ x), x ^= nums[i];
        return v;
    }
};