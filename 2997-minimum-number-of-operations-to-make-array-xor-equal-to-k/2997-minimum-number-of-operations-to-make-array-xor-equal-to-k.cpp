class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        bitset<20> x = k;
        for(int i : nums)
            x ^= i;
        return x.count();
    }
};