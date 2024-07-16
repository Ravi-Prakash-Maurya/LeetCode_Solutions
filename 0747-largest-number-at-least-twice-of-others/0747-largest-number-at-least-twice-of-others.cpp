class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());
        if(vec[vec.size() - 1] < vec[vec.size() - 2] * 2) return -1;
        int x = 0;
        for(int i : nums) {
            if(i == vec[vec.size() - 1]) return x;
            x++;
        }
        return x;
    }
};