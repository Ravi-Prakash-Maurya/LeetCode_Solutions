class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> vec;
        for(int i = 1; i < height.size(); i++) if(height[i - 1] > threshold) vec.push_back(i);
        return vec;
    }
};