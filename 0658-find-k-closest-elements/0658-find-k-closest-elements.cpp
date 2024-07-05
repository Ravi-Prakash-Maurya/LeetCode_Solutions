class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        int n = a.size(), c = 0;
        for (int i = 1; i < n; i++)
            if (abs(a[i] - x) < abs(a[c] - x) || 
            (abs(a[i] - x) == abs(a[c] - x) && a[i] < a[c])) c = i;
        int left = c, right = c;
        while (right - left + 1 < k)
            if (left == 0) right++;
            else if (right == n - 1) left--;
            else if (abs(a[left - 1] - x) <= abs(a[right + 1] - x)) left--;
            else right++;
        return vector<int>(a.begin() + left, a.begin() + left + k);
    }
};
