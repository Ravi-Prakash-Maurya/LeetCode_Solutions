class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag = false;
        for(int i = 0; i <= 20 ; i++)
        {
            long ans = pow(3,i);
            if(ans == n)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};