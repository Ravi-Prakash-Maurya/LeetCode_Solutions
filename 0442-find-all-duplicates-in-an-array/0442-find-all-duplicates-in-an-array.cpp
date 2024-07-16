class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a : nums)
            m[a]++;
        vector<int> vec;
        for(auto it : m)
            if(it.second == 2)
                vec.push_back(it.first);
        return vec;
    }
};