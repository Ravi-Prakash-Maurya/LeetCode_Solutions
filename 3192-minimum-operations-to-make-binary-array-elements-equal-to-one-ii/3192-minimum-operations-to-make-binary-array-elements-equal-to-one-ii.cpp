class Solution {
public:
    int minOperations(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                if(x % 2 == 0) x++;
            } else {
                if(x % 2 == 1) x++;
            }
        }
        return x;
    }
};
