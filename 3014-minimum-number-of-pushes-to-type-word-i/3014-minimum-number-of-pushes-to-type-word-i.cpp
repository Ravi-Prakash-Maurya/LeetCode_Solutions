class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        return n < 9 ? n : n < 17 ? 2 * n - 8 : n < 25 ? 3 * n - 24 : 4 * n - 48;
    }
};