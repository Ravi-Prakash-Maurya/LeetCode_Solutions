class Solution {
public:
    bool isprime(int a){
        if(a == 1) return false;
        for(int i = 2; i < a; i++) {
            if(a % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int x = 0;
        while(left <= right){
            bitset<32> b(left);
            bool f = isprime(b.count());
            if(f) x++;
            left++; 
        }
        return x;
    }
};