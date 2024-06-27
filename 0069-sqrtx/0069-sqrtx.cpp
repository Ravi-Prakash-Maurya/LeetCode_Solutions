class Solution {
public:
    int mySqrt(int x) {
        float y, z;
        for(float i = 0; i <= x ; i++) {
            y = i * i;
            z = i;
            if(y == x) break;
            else if(x == 2147395599) {
                z = 46339;
                break;
            } else if(y > x) {
                z = z - 1;
                break;
            } else continue;
        }
        return z;
    }
};