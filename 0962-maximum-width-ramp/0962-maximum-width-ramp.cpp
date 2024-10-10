class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size(), x = 0;
        vector<int> s;
        for(int i = 0; i < n; i++) if(s.empty() || nums[s.back()] > nums[i]) s.push_back(i);
        for(int j = n - 1; j >= 0; j--) while(!s.empty() && nums[s.back()] <= nums[j]) {
                x = max(x, j - s.back());
                s.pop_back();
            }
        return x;
    }
};
