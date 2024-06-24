class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int x = 0, c = 0;
        for(int i = 0; i < nums.size(); i++) {
            if((nums[i] + c) % 2 == 0) {
                if(i > nums.size() - k) return -1;
                else {
                    x++;
                    c++;
                    nums[i] = -1;
                }
            }
            if(i + 1 >= k) c -= (nums[i - k + 1] < 0);     
        }
        return x;
    }
};