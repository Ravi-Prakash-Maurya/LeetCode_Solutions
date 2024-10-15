class Solution {
public:
    long long minimumSteps(string s) {
        long long x = 0, c = 0; 
        for(char t : s) t == '0' ? x += c : c++;
        return x;
    }
};