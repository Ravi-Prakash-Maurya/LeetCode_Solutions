class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> v(k, 0);
        for(int i : arr) v[((i % k) + k) % k]++;
        if(v[0] % 2 != 0) return false; 
        for(int i = 1; i <= k / 2; i++) if(v[i] != v[k - i]) return false;
        return true;
    }
};