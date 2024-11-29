class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for(int i : gifts) q.push(i);
        while(k--) {
            int a = q.top();
            q.pop();
            q.push(floor(sqrt(a)));
        }
        long long x = 0;
        while(!q.empty()) {
            x += q.top();
            q.pop();
        }
        return x;
    }
};