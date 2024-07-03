class Solution {
public:
    int minDifference(vector<int>& n) {
        int s = n.size();
        if (s <= 4) return 0;
        sort(n.begin(), n.end());
        return min({n[s - 1] - n[3], n[s - 2] - n[2], n[s - 3] - n[1], n[s - 4] - n[0]});
    }
};