class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1, high = INT_MIN, res = 0;
        for(int x: quantities) if(high < x) high = x;
        while(low <= high) {
            int mid = low + (high - low) / 2,  sum = 0;
            for(int x: quantities) sum += (ceil((float)x / float(mid)));
            if(sum <= n) res = mid, high = mid - 1;
            else low = mid + 1;
        }
        return res;
    }
};