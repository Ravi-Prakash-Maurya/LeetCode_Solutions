class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vec;
        for(int i = 0; i < nums.size(); i++)
            vec.push_back(nums[i]*nums[i]);
        sort(vec.begin(), vec.end());
        return vec;
    }
};