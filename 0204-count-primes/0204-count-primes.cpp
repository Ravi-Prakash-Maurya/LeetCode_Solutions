class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n, true);
        for (int i = 2; i * i < n; i++)
            if (isPrime[i])
                for (int j = i * i; j < n; j += i)
                    isPrime[j] = false;
        int c = 0;
        for(int i = 2; i < n; i++)
            if(isPrime[i])
                c++;
        return c;
    }
};    