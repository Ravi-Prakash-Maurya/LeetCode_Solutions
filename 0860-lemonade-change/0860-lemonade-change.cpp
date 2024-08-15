class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int x = 0, y = 0, f = 1;
        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) x++;
            else if(bills[i] == 10) {
                x--;
                y++;
            } else if(bills[i] == 20)
                if(x > 2 && y == 0) x -= 3;
                else {
                    y--;
                    x--;
                }
            if(x < 0 || y < 0) {
                f = 0;
                break;
            }
        }
        return f;
    }
};