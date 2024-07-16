class Solution {
public:
    int distanceBetweenBusStops(vector<int>& di, int s, int d) {
        long long x = 0;
        long long y = 0;
        for(int i = 0; i < di.size(); i++)
            if((i >= s && i < d) || (i >= d && i < s))
                x += di[i];
            else
                y += di[i];
        x = min(x, y);
        return x;
    }
};