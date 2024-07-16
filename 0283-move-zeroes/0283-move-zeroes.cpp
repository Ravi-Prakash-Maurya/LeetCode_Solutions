class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
            if(nums[i] != 0) ans.insert(ans.end(), nums[i]);
            else count++;
        ans.insert(ans.end(), count, 0);
        nums = ans;
    }
};