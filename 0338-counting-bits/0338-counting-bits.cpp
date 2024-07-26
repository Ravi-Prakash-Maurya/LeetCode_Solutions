class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec(n + 1);
        for(int i = 0; i <= n; i++) {
            bitset<20> x = i;
            vec[i] = x.count();
        }
        return vec;
    }
};