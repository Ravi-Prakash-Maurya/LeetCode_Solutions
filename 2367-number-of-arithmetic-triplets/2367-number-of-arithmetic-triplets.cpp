class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int d) {
        map<int, int> m;
        int x = 0;
        for(int i : nums) m[i]++;
        for(int i : nums) if(m[i + d] && m[i + d + d]) x++;
        return x;
    }
};