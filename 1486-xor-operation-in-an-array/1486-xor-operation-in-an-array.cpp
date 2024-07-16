class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            vec[i] = start + (2 * i);
        }
        int x = vec[0];
        int i = 0;
        while(i < n - 1)
        {
            x = x ^ vec[i+1];
            i++;
        }
        return x;
    }
};