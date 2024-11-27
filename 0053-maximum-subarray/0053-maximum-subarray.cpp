class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c = 0, x = INT_MIN;
        for(int i : nums) {
            c += i, x = max(x, c); 
            if(c < 0) c = 0; 
        }
        return x;
    }
};