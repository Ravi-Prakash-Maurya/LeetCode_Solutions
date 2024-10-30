class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> seen, ans;
        int x = 0;
        for(int i : nums) {
            if(i == -1) {
                x++;
                if(x <= seen.size()) ans.push_back(seen[x - 1]);
                else ans.push_back(-1);
            } else seen.insert(seen.begin(), i), x = 0;
        }
        return ans;
    }
};