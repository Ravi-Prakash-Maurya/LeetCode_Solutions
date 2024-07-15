class Solution {
public:
    int encrypt(int a){
        int x = 0, c = 0, n = 0;
        while(a){
            x = max(x, a % 10);
            a /= 10;
            c++;
        }
        while(c--) n = n * 10 + x;
        return n;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int x = 0;
        for(int i : nums) x += encrypt(i);
        return x;
    }
};