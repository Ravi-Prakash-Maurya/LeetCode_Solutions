class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums.size();
        int count = 0;
        if(nums[x-1] > 0)
        {
            if((nums[0]*nums[1]>nums[x-1]*nums[x-2]) || (nums[0]*nums[1]>nums[x-2]*nums[x-3]))
            {
                count = nums[0] * nums[1] * nums[x-1];
            }
            else
            {
                count = nums[x-1] * nums[x-2] * nums[x-3];
            }
        }
        else
        {
            count = nums[x-1] * nums[x-2] * nums[x-3];
        }
        return count;        
    }
};