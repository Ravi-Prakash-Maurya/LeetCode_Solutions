class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vec.push_back({});
        for (int num : nums) {
            int n = vec.size();
            for (int i = 0; i < n; ++i) {
                vector<int> subset = vec[i];
                subset.push_back(num);
                vec.push_back(subset);
            }
        }
        return vec;
    }
};
