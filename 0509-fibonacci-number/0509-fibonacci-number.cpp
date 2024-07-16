class Solution {
public:
    int fib(int n) {
        int x = 0;
        int y = 1;
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        else
        {
            int ans = 0;
            while(n > 1)
            {
                int temp = x;
                x = y;
                y = x + temp;
                n--;
            }
        }
        return y;
    }
};