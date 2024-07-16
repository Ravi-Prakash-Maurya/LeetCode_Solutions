// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int x = 1;
        while(!isBadVersion(x))
            x++;
        return x;
    }
};