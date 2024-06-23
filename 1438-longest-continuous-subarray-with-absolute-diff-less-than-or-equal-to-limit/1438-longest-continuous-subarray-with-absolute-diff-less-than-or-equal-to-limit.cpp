class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> inc, dec;
        int x = 0, j = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (!inc.empty() && nums[i] < inc.back()) inc.pop_back();
            inc.push_back(nums[i]);
            while (!dec.empty() && nums[i] > dec.back()) dec.pop_back();
            dec.push_back(nums[i]);
            while (dec.front() - inc.front() > limit) {
                if (nums[j] == dec.front()) dec.pop_front();
                if (nums[j] == inc.front()) inc.pop_front();
                j++;
            }
            x = max(x, i - j + 1);
        }
        return x;
    }
};