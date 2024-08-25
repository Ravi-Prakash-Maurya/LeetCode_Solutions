class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            auto a = min_element(nums.begin(), nums.end());
            *a *= multiplier;
        }
        return nums;
    }
};