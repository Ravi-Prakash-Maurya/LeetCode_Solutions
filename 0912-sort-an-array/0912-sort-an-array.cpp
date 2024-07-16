class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> m;
        for(int i : nums) m[i]++;
        nums.clear();
        for(auto pair : m) nums.insert(nums.end(), pair.second, pair.first);
        return nums;
    }
};