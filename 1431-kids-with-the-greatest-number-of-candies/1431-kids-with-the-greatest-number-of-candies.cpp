class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool> vec(candies.size(), false);
        int x = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++)
            if(candies[i] + e >= x) vec[i] = true;
        return vec;
    }
};