class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = duration;
        for(int i = 1; i < timeSeries.size(); i++)
        {
            if(timeSeries[i] >= timeSeries[i-1] + duration)
                ans += duration;
            else
                ans += (duration - (duration - timeSeries[i] + timeSeries[i-1]));
        }
        return ans;
    }
};