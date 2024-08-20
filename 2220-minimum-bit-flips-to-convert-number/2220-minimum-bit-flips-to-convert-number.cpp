class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> n = start ^ goal;
        return n.count();
    }
};