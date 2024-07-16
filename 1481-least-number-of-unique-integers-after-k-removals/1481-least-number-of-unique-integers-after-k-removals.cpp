class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> n;
        multimap<int, int> m;
        for(auto i : arr)
        {
            n[i]++;
        }
        for(auto it : n)
        {
            m.insert({it.second,it.first});
        }
        int count = 0;
        for(auto it = m.begin(); it != m.end(); it++)
        {
            k -= it->first;
            if(k < 0)
            {
                return m.size() - count;
            }
            count++;
        }
        return 0;
    }
};