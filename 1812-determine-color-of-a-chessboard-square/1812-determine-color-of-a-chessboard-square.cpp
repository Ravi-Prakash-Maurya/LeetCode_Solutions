class Solution {
public:
    bool squareIsWhite(string c) {
        return (c[0] + c[1]) % 2 == 1;
    }
};