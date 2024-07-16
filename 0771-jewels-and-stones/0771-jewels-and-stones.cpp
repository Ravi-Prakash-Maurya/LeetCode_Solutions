class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        for(char c : stones) m[c]++;
        int x = 0;
        for(char c : jewels) x += m[c];
        return x;
    }
};