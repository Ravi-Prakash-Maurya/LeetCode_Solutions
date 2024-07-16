class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                flag = true;
                count = i;
                break;
            }
        }
        return flag ==  true ? count : -1;
    }
};