class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> vec = matrix;
        int y = matrix.size();
        int x = matrix[0].size();
        for(int i = 0; i < y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                if(matrix[i][j] == 0)
                {
                    int a = i;
                    int b = j;
                    for(int k = 0; k < x; k++)
                    {
                        vec[a][k] = 0;
                    }
                    for(int l = 0; l < y; l++)
                    {
                        vec[l][b] = 0;
                    }
                }
            }
        }
        matrix = vec;
        ;
    }
};