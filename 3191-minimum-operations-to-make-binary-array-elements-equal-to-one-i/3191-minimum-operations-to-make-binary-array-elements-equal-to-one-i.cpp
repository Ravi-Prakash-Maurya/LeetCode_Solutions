class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == 0) {
                if (i + 2 < nums.size()) {
                    for (int j = i; j < i + 3; ++j) {
                        nums[j] = 1 - nums[j];
                    }
                    count++;
                } else return -1;
            }
            i++;
        }
        return count;
    }
};
