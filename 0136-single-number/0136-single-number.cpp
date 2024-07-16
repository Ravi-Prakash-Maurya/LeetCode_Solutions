class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        int x = 0;
        for(int i : nums) m[i]++;
        for(auto i : m) if(i.second == 1) x = i.first;
        return x;
    }
};