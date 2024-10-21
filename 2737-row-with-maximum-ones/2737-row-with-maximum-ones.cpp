class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     int x = 0, c = 0;
        for(int i = 0 ; i < mat.size() ; i++) {
            int y = 0;
            for(int j = 0 ; j < mat[0].size() ; j++) y += (mat[i][j] == 1);
            if(y > c) c = y, x = i;
        }
        return {x, c};
    }
};