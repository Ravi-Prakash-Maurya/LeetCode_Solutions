class Solution {
public:
    bool checkPerfectNumber(int num) {
        bool flag = true;
        int count = 0;
        for(int i = 1; i < num; i++)
        {
            if(num%i == 0)
            {
                count += i;
            }
        }
        if(count != num)
        {
            flag = false;
        }
        return flag;
    }
};