class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> vec;
        sort(potions.begin(), potions.end());
        for(int sp : spells){
            long long min_potion_strength = (success + sp - 1) / sp;
            auto it = lower_bound(potions.begin(), potions.end(), min_potion_strength);
            vec.push_back(potions.end() - it);
        }
        return vec;
    }
};