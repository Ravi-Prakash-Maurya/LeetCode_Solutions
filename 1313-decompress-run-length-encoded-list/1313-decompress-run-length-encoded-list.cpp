class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vec;
        for(int i = 0; i < nums.size(); i += 2) vec.insert(vec.end(), nums[i], nums[i + 1]);
        return vec;
    }
};