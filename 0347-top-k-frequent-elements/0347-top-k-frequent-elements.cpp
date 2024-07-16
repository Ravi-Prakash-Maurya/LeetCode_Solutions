class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i : nums) m[i]++;
        vector<pair<int, int>> dvec;
        for (const auto& x : m) dvec.push_back({x.second, x.first});
        sort(dvec.rbegin(),dvec.rend());
        vector<int> vec;
        for (int i = 0; i < k; i++) vec.push_back(dvec[i].second);
        return vec;
    }
};