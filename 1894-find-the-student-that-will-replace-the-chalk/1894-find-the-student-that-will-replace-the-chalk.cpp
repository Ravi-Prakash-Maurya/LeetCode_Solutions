class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long t = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= t;
        for(int i = 0; i < chalk.size(); ++i)
            if(chalk[i] > k) return i;
            else k -= chalk[i];
        return -1;
    }
};