class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag = true;
        int x = nums.size();
        int i = 0;
        if(nums[0]<nums[(x-1)])
        {
             for(int i =0;i<(x-1);i++)
            {
               if(nums[i]>nums[(i+1)])
                {
                    flag = false;
                    break;
                }
            }
        }
        else if(nums[0]>nums[(x-1)])
        {
             for(int i =0;i<(x-1);i++)
            {
               if(nums[i]<nums[(i+1)])
                {
                    flag = false;
                    break;
                }
            }
        }
        else if(nums[0]==nums[(x-1)])
        {
             for(int i =0;i<(x-1);i++)
            {
               if(nums[i] != nums[(i+1)])
                {
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
};