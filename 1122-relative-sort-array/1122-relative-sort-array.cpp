class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s(arr2.begin(), arr2.end());
        map<int, int> m;
        vector<int> vec;
        for (int num : arr1) m[num]++;
        for (int x : arr2) {
            vec.insert(vec.end(), m[x], x);
            m.erase(x);
        }
        for (auto& x : m) vec.insert(vec.end(), x.second, x.first);
        return vec;
    }
};