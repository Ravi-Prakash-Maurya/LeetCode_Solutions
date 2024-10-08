class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            if(nums[l] % 2 == 0) l++;
            else if(nums[r] % 2 != 0) r--;
            else swap(nums[l++], nums[r--]);
        }        
        return nums;
    }
};