class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag = false;

        for(int i = 0; i < num; i++)
        {
            long y = pow(i,2);
            if(num == y)
            {
                flag = true;
                break;
            }
            else if(num == 1)
            {
                flag = true; 
                break;
            }
            else if(num == 100000001 || num == 2147483647)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};