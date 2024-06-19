class Solution {
public:
    int minDays(vector<int>& bd, int m, int k) {
        int mnd = 0, mxd = *max_element(bd.begin(), bd.end()), n = bd.size();
        if ((long long)m * k > n) return -1;
        while (mnd < mxd) {
            int mid = mnd + (mxd - mnd) / 2, b = 0, f = 0;
            for (int i = 0; i < n; ++i) {
                if (bd[i] <= mid) {
                    f++;
                    if (f == k) {
                        b++;
                        f = 0;
                    }
                } else f = 0;
            }
            if (b >= m) mxd = mid;
            else mnd = mid + 1;
        }
        return mnd;
    }
};
