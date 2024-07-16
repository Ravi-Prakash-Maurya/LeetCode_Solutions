class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>m;
        for(int x : arr)
            m[x]++;
        unordered_set<int> s;
        for (const auto& entry : m) {
            if (s.find(entry.second) != s.end())
                return false;
            s.insert(entry.second);
        }
        return true;
    }
};