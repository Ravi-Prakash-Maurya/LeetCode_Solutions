class Solution {
public:
    int hammingDistance(int x, int y) {
        int c = 0, a = 0, b = 0;
        while(x || y) {
            a = x % 2;
            b = y % 2;
            if(a != b)
                c++;
            x /= 2;
            y /= 2;
        }
        return c;
    }
};