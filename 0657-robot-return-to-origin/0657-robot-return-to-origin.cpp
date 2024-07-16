class Solution {
public:
    bool judgeCircle(string moves) {
        bool flag = false;
        int x = 0;
        int y = 0;
        for (int i = 0; i< moves.size(); i++)
        {
            if(moves[i] == 'U')
            {
                y++;
            }
            else if(moves[i] == 'D')
            {
                y--;
            }
            else if(moves[i] == 'R')
            {
                x++;
            }
            else if(moves[i] == 'L')
            {
                x--;
            }
        }
        if(x == 0 && y == 0)
        {
            flag = true;
        }
        return flag;
    }
};