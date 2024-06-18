class Solution {
public:
    int maxProfitAssignment(vector<int>& di, vector<int>& pr, vector<int>& wo) {
        int n = pr.size(), m = wo.size(), x = 0, top = 0, i = 0, j = 0;
        vector<pair<int, int>> vec(n);
        for(int i = 0; i < n; i++) vec[i] = {di[i], pr[i]};
        sort(vec.begin(), vec.end());
        sort(wo.begin(), wo.end());
        while(j < m){
            if(wo[j] >= vec[i].first && i < n) top = max(top, vec[i++].second);
            else {
                x += top;
                j++;
            }
        }
        return x;
    }
};