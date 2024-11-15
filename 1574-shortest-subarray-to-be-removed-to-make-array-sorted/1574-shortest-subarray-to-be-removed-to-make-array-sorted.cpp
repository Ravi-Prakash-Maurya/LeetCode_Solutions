class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size(), l = 0, r = n - 1;
        while(l + 1 < n && arr[l] <= arr[l + 1]) l++;
        if (l == n - 1) return 0;
        while(r > 0 && arr[r - 1] <= arr[r]) r--;
        int x = min(n - l - 1, r), i = 0, j = r;
        while(i <= l && j < n) arr[i] <= arr[j] ? (x = min(x, j - i - 1), i++) : j++;
        return x;
    }
};