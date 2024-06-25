class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {        
        int n = nums.size(), i = 0, m = n;
        while(i < n - 1){
            if(nums[i] == nums[i+1] && nums[i] != 0){
                nums[i] = 2 * nums[i];
                nums.erase(nums.begin() + i + 1);
                i++;
                n--;
            } else if(nums[i] == 0) {
                nums.erase(nums.begin() + i);
                n--;
            } else i++;
        }
        nums.insert(nums.end(), m - n, 0);
        return nums;
    }
};