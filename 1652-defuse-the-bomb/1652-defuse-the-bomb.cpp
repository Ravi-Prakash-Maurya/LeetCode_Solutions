class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size(), x = 0;
        vector<int> v(n, 0);        
        if(k == 0) return v;
        for(int i = 0; i < n; i++) {
            if(k > 0) for(int j = 1; j <= k; j++) x += code[(i + j) % n];
            else for(int j = 1; j <= -k; j++) x += code[(i - j + n) % n];
            v[i] = x, x = 0;
        }
        return v;
    }
};