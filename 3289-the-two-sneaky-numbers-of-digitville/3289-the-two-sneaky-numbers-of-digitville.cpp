class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;
        for(int i : nums) 
            if(s.find(i) != s.end()) v.push_back(i);
            else s.insert(i);
        return v;
    }
};