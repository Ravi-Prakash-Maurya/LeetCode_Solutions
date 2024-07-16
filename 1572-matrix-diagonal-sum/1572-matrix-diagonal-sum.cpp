class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat.size(); j++)
            {
                if(i == j || (i + j) == (mat.size() - 1))
                {
                    count += mat[i][j];
                }
            }
        }
        if(mat.size() == 1)
        {
            count = count;
        }
        // else if(mat.size() % 2 == 1)
        // {
        //     count = count - mat[(mat.size()-1)/2][(mat.size()-1)/2];
        // }
        return count;
    }
};