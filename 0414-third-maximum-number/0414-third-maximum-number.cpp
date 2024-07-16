class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x : nums)
            m[x]++;
        vector<int> vec;
        for(auto it : m)
            vec.push_back(it.first);
        sort(vec.begin(),vec.end());
        if(vec.size() < 3)
            return vec[vec.size() - 1];
        return vec[vec.size() - 3];
    }
};