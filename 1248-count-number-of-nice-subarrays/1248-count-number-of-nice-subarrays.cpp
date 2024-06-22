class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int x = 0, c = 0, i = 0, j = 0;
        while (i < nums.size()) {
            if (nums[i] % 2 == 1) {
                k--;
                c = 0;
            }
            while (k == 0) {
                if (nums[j] % 2 == 1) k++;
                c++;
                j++;
            }
            x += c;
            i++;
        }
        return x;
    }
};