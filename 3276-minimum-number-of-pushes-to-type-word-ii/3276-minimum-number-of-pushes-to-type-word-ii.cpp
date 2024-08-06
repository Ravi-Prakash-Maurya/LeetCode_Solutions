class Solution {
public:
    int minimumPushes(string word) {
        vector<int> vec(26, 0);
        for(auto c : word) vec[(c - 'a')]++;
        int x = 0;
        sort(vec.rbegin(), vec.rend());
        for(int i = 0; i < 26; i++) {
            if(i < 8) x += vec[i];
            else if(i < 16) x += vec[i] * 2;
            else if(i < 24) x += vec[i] * 3;
            else x += vec[i] * 4;
        }
        return x;
    }
};