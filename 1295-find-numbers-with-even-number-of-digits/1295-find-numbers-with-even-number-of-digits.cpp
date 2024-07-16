class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto x : nums)
        {
            if(x / 100000 != 0)
                count++;
            else if(x / 1000 != 0 && x / 10000 == 0)
                count++;
            else if(x / 10 != 0 && x / 100 == 0)
                count++;
        }
        return count;
    }
};