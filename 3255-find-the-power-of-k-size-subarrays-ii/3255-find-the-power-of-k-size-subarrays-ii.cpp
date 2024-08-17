class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> num, vec;
        num.push_back(1);
        int a = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i - 1] + 1 == nums[i]) {
                a++;
                num.push_back(a);
            } else {
                a = 1;
                num.push_back(a);
            }
        }
        for(int i = 0; i <= nums.size() - k; i++) {
            if((num[i + k - 1] - num[i] + 1) == k) vec.push_back(nums[i + k - 1]);
            else vec.push_back(-1);
        }
        return vec;
    }
};