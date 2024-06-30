class Solution {
public:
    int maxHeightOfTriangle(int r, int b) {
        int x = 0, c = 1, t = 0, red = r, blue = b;
        while(red + blue >= c) {
            if(c % 2 == 0) {
                if(blue >= c) {
                    t++;
                    blue -= c;
                    c++;
                } else break;
            } else {
                if(red >= c) {
                    t++;
                    red -= c;
                    c++;
                } else break;
            }
        }
        x = max(x, t), c = 1, red = r, blue = b, t = 0;
        while(red + blue >= c) {
            if(c % 2 == 0) {
                if(red >= c) {
                    t++;
                    red -= c;
                    c++;
                } else break;
            } else {
                if(blue >= c) {
                    t++;
                    blue -= c;
                    c++;
                } else break;
            }
        }
        x = max(x, t);
        return x;
    }
};