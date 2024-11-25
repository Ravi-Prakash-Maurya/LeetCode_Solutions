class Solution {
public:
    int countTriples(int n) {
        int x = 0;
        for(int a = 1; a <= n; a++) for(int b = 1; b <= n; b++) {
                int d = a * a + b * b, c = sqrt(d);
                if(c <= n && c * c == d) x++;
            }
        return x;
    }
};