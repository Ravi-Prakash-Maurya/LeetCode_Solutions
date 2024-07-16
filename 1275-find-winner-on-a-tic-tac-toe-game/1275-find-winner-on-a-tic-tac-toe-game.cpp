class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> vec(3,vector<int>(3));
        int x = moves.size();
        int y = 2;
        int c = 0;
        for(int i = 0; i < x; i++)
        {
            if(i % 2 == 0)
            {
                vec[moves[i][0]][moves[i][1]] = 10;
            }
            else
            {
                vec[moves[i][0]][moves[i][1]] = 1;
            }
        }
        if(((vec[0][0] + vec[1][1] + vec[2][2]) == 30) || ((vec[0][2] + vec[1][1] + vec[2][0]) == 30))
        {
            return "A";
        }
        else if(((vec[0][0] + vec[1][1] + vec[2][2]) == 3) || ((vec[0][2] + vec[1][1] + vec[2][0]) == 3))
        {
            return "B";
        }
        for(int i = 0; i < 3; i++)
        {
            if(((vec[i][0] + vec[i][1] + vec[i][2]) == 30) || (vec[0][i] + vec[1][i] + vec[2][i]) == 30)
            {
                return "A";
            }
            else if(((vec[i][0] + vec[i][1] + vec[i][2]) == 3) || ((vec[0][i] + vec[1][i] + vec[2][i]) == 3))
            {
                return "B";
            }
            c += (vec[i][0] + vec[i][1] + vec[i][2]);
        }
        if(c == 54)
        {
            return "Draw";
        }
        return "Pending";
    }
};