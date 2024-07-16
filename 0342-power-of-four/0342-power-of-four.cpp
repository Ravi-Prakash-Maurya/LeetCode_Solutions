class Solution {
public:
    bool isPowerOfFour(int n) {
        bool flag = false;
        for(int i = 0; i <= 15 ; i++)
        {
            long ans = pow(4,i);
            if(ans == n)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};