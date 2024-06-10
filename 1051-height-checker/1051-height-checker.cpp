class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> vec = heights;
        sort(vec.begin(), vec.end());
        int x = 0;
        for(int i = 0; i < vec.size(); i++)
            if(vec[i] != heights[i]) x++;
        return x;
    }
};