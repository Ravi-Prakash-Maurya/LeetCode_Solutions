class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size(), y = 0, x = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            m[nums[i]]++, y += nums[i];
            if(i >= k) {
                int j = nums[i - k];
                m[j]--, y -= j;
                if(m[j] == 0) m.erase(j);
            }
            if(i >= k - 1 && m.size() == k) x = max(x, y);
        }
        return x;
    }
};