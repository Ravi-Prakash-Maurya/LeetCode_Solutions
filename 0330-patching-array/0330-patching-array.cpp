class Solution {
public:
    int minPatches(std::vector<int>& nums, int n) {
        long long c = 1;
        int x = 0, i = 0;
        while (c <= n)
            if (i < nums.size() && nums[i] <= c) {
                c += nums[i];
                i++;
            } else {
                c += c;
                x++;
            }
        return x;
    }
};