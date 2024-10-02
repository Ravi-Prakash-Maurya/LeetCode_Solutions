class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> vec = arr; 
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        for (int i = 0; i < vec.size(); i++) m[vec[i]] = i + 1;
        for (int i = 0; i < arr.size(); i++) arr[i] = m[arr[i]];
        return arr;
    }
};