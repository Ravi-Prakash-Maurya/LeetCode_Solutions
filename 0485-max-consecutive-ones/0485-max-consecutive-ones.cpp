class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x = 0, y = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
                    x++;
            else
                    x = 0;
            y = max(x, y);
        }
        return y;
    }
};