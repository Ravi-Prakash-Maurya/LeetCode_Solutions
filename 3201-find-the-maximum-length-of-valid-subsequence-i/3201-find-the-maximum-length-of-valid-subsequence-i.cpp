class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int x = 0, c = nums[0] % 2, odd = 0, even = 0, both = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) even++;
            else odd++;
            if(nums[i] % 2 == c) {
                both++;
                c = 1 - c;
            }
        }
        x = max(both, max(even, odd));
        return x;
    }
};