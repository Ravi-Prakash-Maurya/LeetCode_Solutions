class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int> vec;
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            if(nums[i] + nums[j] > t) j--;
            else if(nums[i] + nums[j] < t) i++;
            else {
                vec.push_back(i + 1);
                vec.push_back(j + 1);
                break;
            }
        }
        return vec;
    }
};