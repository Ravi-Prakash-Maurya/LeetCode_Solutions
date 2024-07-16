class Solution {
public:
    bool isHappy(int n) {
        bool flag = false;
        int x = 0;
        int y = 0;
        for(int i = 0; i < 10; i++)
        {
            while(n > 0)
            {
                x = n % 10;
                n = n / 10;
                y += x * x;
            }
            if(y == 1)
            {
                flag = true;
                break;
            }
            n = y;
            y = 0;
        }
        return flag;        
    }
};