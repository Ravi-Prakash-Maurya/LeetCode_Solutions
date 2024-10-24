class Solution {
public:
    int smallestEqual(vector<int>& n) {
        for(int i = 0; i < n.size(); i++) if(i % 10 == n[i]) return i;
        return -1;
    }
};