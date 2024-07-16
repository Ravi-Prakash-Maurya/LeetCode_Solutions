class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i : nums) m[i]++;
        nums.clear();
        for(auto pair : m) nums.insert(nums.end(), pair.second, pair.first);
        return nums[nums.size() - k];
    }
};