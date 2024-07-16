class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m, n;
        for(int i : nums1) m.insert(i);
        for(int i : nums2) n.insert(i);
        vector<int> vec;
        for(int i : n) if(m.find(i) != m.end()) vec.push_back(i);
        return vec;
    }
};