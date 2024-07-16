class Solution {
public:
    int maximum69Number (int num) {
        int count = 0;
        int x = 0;
        int y = 0;
        int z = num;
        while(num > 0)
        {
            x = num % 10;
            if(x == 6)
            {
                y = 6 * pow(10,count);
            }
            num = num / 10;
            count++;
        }
        z = z - y;
        z = z + ((y / 6) * 9);
        return z;
    }
};