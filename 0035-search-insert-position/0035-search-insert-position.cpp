class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(target > nums[i])
            {
                count = i+1;
            }
            else if(target == nums[i])
            {
                count = i;
                break;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};