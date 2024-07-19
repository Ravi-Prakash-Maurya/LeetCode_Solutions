class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> vec;
        unordered_set<int> s;
        for(auto r : matrix) s.insert(*min_element(r.begin(), r.end()));
        for(int j = 0; j < matrix[0].size(); j++) {
            int x = 0;
            for(int i = 0; i < matrix.size(); i++) x = max(x, matrix[i][j]);
            if(s.find(x) != s.end()) vec.push_back(x);
        }
        return vec;
    }
};