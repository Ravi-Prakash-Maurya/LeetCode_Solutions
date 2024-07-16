class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec;
        for(int i = 0; i <= rowIndex; i++) {
            vector<int> now(i + 1, 1);
            for(int j = 1; j < now.size() - 1; j++) {
                now[j] = vec[j - 1] + vec[j];
            }
            vec = now;
        }
        return vec;
    }
};