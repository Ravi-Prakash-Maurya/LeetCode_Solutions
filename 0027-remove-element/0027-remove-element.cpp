class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size();
        while (i < j)
            if (nums[i] == val) nums[i] = nums[--j];
            else i++;
        return i;
    }
};
