class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ans = 0, a = nums[0];
        sort(nums.begin(),nums.end());
        int x = nums.size();
        for(int i = 0; i < x + 1; i++)
        {          
            if(nums[i] == a)
            {
                count++;
                if(count > x / 2)
                {
                    return nums[i];
                }
            }             
            else
            {
                a = nums[i];
                count = 1;
            }
        }
        return 0;
    }
};