class Solution {
public:
    int getLucky(string s, int k) {
        int x = 0, t = 0;
        for(char c : s) x += ((c - 'a' + 1) / 10) + ((c - 'a' + 1) % 10);
        while(k-- > 1) {
            while(x) t += x % 10, x /= 10;
            x = t, t = 0;
        }
        return x;
    }
};