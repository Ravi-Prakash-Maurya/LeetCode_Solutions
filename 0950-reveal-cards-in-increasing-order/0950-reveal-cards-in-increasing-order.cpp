class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& d) {
        sort(d.begin(), d.end());
        vector<int>vec;
        vec.push_back(d[d.size() - 1]);
        if(d.size() == 1)
            return vec;
        for(int i = (d.size() - 2); i >= 0; i--) {
            int x = vec.back();
            vec.pop_back();
            vec.insert(vec.begin(), x);
            vec.insert(vec.begin(), d[i]);
        }
        return vec;
    }
};