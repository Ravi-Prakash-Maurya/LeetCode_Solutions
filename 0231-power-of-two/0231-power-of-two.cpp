class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        for(int i = 0; i <= 30 ; i++)
        {
            int ans = pow(2,i);
            if(ans == n)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};