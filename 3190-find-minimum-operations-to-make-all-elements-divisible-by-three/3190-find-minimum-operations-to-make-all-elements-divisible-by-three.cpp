class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int x = 0;
        for(int i : nums) {
            if(i % 3 != 0) x++;
        }
        return x;
    }
};