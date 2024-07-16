class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x = mat.size();
        int y = mat[0].size();
        int a = 0;
        vector<vector<int>> ans(r,vector<int>(c));
        if((x * y) == (r * c))
        {
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    ans[a / c][a % c] = mat[i][j];
                    a++;
                }
            }
            return ans;
        }
        return mat;
    }
};