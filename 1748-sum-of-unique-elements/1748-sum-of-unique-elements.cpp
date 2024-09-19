class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums) m[i]++;
        int x = 0;
        for(auto p : m) if(p.second == 1) x += p.first;
        return x;
    }
};