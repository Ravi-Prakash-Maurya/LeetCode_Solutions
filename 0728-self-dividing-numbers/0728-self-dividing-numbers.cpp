class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int x = 0, y = 0;
        int a = 0, b = 0;
        while(left <= right)
        {
            x = left;
            y = left;
            while(x > 0)
            {
                a = x % 10;
                if(a == 0 || (y % a != 0))
                {
                    b = 1;
                    break;
                }
                x = x / 10;
            }
            if(b == 0)
            {
                ans.push_back(y);
            }
            b = 0;
            left++;
        }
        return ans;
    }
};