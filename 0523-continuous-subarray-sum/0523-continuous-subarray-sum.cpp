class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = -1;
        int x = 0;
        for(int i = 0; i < nums.size(); i++) {
            x += nums[i];
            if(m.find(x % k) != m.end()) {
                if(i - m[x % k] >= 2)
                    return true;
            }
            else m[x % k] = i;
        }
        return false;
    }
};