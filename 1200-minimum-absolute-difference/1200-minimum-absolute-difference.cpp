class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(), a.end());
        int x = INT_MAX;
        for(int i = 0; i < a.size() - 1; i++) x = min(x, a[i + 1] - a[i]);
        vector<vector<int>> vec;
        for(int i = 0; i < a.size() - 1; i++) {
            if(a[i + 1] - a[i] == x) vec.push_back({a[i], a[i + 1]});
        }
        return vec;
    }
};