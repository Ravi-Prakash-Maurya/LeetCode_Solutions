class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> vec;
        for(int i : arr) {
            bitset<32> x = i;
            vec.push_back({x.count(), i});
        }
        sort(vec.begin(), vec.end());
        vector<int> ans;
        for(auto p : vec) ans.push_back(p.second);
        return ans;
    }
};