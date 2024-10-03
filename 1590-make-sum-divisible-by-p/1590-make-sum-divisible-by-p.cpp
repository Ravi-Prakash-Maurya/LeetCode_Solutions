class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long t = accumulate(nums.begin(), nums.end(), 0L), s = 0;
        int r = t % p, x = nums.size();
        if(r == 0) return 0;
        unordered_map<int, int> m;
        m[0] = -1;
        for(int i = 0; i < nums.size(); ++i) {
            s += nums[i];
            int y = (s % p - r + p) % p;
            if(m.find(y) != m.end()) x = min(x, i - m[y]);
            m[s % p] = i;
        }
        return x == nums.size() ? -1 : x;
    }
};