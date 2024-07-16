class Solution {
public:
    bool isPalindrome(int x) {
        bool flag = false;
        long y = 0;
        long z = 0;
        long a = x;
        if(x >= 0)
        {
            while(a>0)
            {
                z = a % 10;
                y = (y * 10) + z;
                a = a / 10;
            }
            if( x == y )
            {
                flag = true;
            }
        }
        return flag;
    }
};