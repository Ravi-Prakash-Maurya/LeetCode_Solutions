class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v(nums.size());
        string s = "";
        for(int i = 0; i < nums.size(); i++) v[i] = to_string(nums[i]);
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        if (v[0] == "0") return "0";
        for(auto i : v) s += i;
        return s;
    }
};