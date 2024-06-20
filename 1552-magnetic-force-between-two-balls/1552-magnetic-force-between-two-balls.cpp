class Solution {
public:
    int maxDistance(vector<int>& po, int m) {
        sort(po.begin(), po.end());
        int n = po.size(), mnf = 1, mxf = po[n-1] - po[0], x = 0;

        while (mnf <= mxf) {
            int mdf = mnf + (mxf - mnf) / 2, c = 1, p = po[0];

            for (int i = 1; i < n; i++) {
                if (po[i] - p >= mdf) {
                    c++;
                    p = po[i];
                    if (c == m)
                        break;
                }
            }

            if (c >= m) {
                x = mdf;
                mnf = mdf + 1;
            } else mxf = mdf - 1;
        }
        return x;
    }
};