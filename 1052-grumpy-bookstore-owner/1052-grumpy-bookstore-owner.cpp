class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int x = 0, g = 0;
        for(int i = 0; i < grumpy.size(); i++) {
            x += (1 - grumpy[i]) * customers[i];
            if(i < minutes) g += grumpy[i] * customers[i];
        }
        int m = g;
        for(int i = 0; i < grumpy.size() - minutes; i++) {
            g -= grumpy[i] * customers[i];
            g += grumpy[i + minutes] * customers[i + minutes];
            m = max(m, g);
        }
        return x + m;
    }
};