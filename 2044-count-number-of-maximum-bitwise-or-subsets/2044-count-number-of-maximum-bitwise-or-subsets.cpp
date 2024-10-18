class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int m = 0, x = 0, n = nums.size(), t = 1 << n;
        for(int i : nums) m |= i;
        for(int i = 1; i < t; i++) {
            int c = 0;
            for(int j = 0; j < n; j++) if(i & (1 << j)) c |= nums[j];
            if(c == m) x++;
        }
        return x;
    }
};