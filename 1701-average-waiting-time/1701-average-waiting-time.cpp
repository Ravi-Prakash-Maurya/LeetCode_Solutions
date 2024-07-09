class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double x = 0;
        int end = 0;
        for(const auto& pair : customers) {
            if(pair[0] >= end) {
                x += pair[1];
                end = pair[1] + pair[0];
            } else {
                x += end + pair[1] - pair[0];
                end = end + pair[1];
            }
        }
        return x / customers.size();
    }
};