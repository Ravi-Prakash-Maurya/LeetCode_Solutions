class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x : nums)
            if(x > 0)
                m[x]++;
        int count = 1;
        // for(auto it : m)
        // {
        //     if(it.first != count)
        //         return count;
        //     count++;
        // }
        while (m.find(count) != m.end()) {
            count++;
        }
        return count;
    }
};