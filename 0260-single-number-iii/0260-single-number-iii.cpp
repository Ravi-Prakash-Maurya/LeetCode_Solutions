class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums) m[i]++;
        vector<int> vec;
        for(auto x : m)
            if(x.second == 1) vec.push_back(x.first);
        return vec;
    }
};