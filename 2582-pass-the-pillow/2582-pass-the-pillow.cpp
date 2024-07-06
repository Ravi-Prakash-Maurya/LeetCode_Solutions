class Solution {
public:
    int passThePillow(int n, int time) {
        int count = 0;
        while(time > (n - 2))
        {
            time -= (n - 1);
            count++;
        }
        if(time != 0)
        {
            if(count % 2 == 0)
            {
                return 1 + time;
            }
            else
            {
                return n - time;
            }
        }
        return ((count % 2 == 0) ? 1 : n);
    }
};