class Solution {
public:
    string losingPlayer(int x, int y) {
        y = y / 4;
        x = min(x, y);
        if(x % 2 == 1) return "Alice";
        else return "Bob";
    }
};