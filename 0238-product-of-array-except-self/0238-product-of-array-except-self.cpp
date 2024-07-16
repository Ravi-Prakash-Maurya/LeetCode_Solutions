class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long x = 1;
        int count = 0;
        int y = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count++;
                y = 0;
            }
            else
                x *= nums[i];
            if(count >= 2)
                break;
        }
        // if(count = 1)
        // {
        //     count = 0;
        // }
        for(int i = 0; i < nums.size(); i++)
        {
            if(count >= 2)
            {
                nums[i] = 0;
            }
            else if(nums[i] == 0)
            {
                nums[i] = x;
            }
            else
            {
                nums[i] = (x * y) / nums[i];
            }
        }
        return nums;
    }
};