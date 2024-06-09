class Solution {
public:
    bool isPossibleDivide(vector<int>& h, int g) {
        map<int, int>m;
        if(h.size() % g != 0) return false;
        vector<int> vec;
        for(auto i : h) m[i]++;
        for(int i = 0; i < h.size(); i++) {
            int x = 0;
            for(auto &it : m) {
                if(it.second > 0) {
                    vec.push_back(it.first);
                    x++;
                    it.second--;
                }
                if(x == g) break;
            }
            if(vec.size() == h.size()) break;
        }
        for(int i = 0; i < h.size(); i += g)
            for(int j = i; j < i + g - 1; j++)
                if(vec[j] + 1 != vec[j + 1]) return false;
        return true;
    }
};