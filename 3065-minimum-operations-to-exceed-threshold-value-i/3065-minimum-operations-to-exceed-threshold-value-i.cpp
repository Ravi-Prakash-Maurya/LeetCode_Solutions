class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        return count_if(nums.begin(), nums.end(), [k](int x) { return x < k; });;
    }
};