class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> v(24, 0);
        for(int n : candidates) for(int i = 0; i < 24; i++) if(n & (1 << i)) v[i]++;
        return *max_element(v.begin(), v.end());
    }
};