class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums) m[i]++;
        int p = 0, l = 0;
        for(auto [n, c] : m) p += c / 2, l += c % 2;
        return {p, l};
    }
};