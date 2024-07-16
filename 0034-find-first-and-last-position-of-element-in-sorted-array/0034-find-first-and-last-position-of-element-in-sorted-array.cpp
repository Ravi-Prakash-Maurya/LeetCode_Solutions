class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int x = 0;
        vector<int> n(2, -1);
        for(int i = 0; i < nums.size(); i++)
        {
            if(x != 0 && nums[i] == target)
                n[1] = i;
            else if(nums[i] == target)
            {
                n[1] = i;
                n[0] = i;
                x++;
            }
        }
        return n;
    }
};