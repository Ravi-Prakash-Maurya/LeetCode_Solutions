class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size(), n = box[0].size();
        vector<vector<char>> v(n, vector<char>(m));
        for(int i = 0; i < n; i++) for(int j = m - 1; j >= 0; j--) v[i][m - 1 - j] = box[j][i];
        for(int i = 0; i < m; i++) {
            int s = n - 1;
            for(int j = s; j >= 0; j--) 
                if(v[j][i] == '*') s = j - 1;
                else if(v[j][i] == '#') v[j][i] = '.', v[s][i] = '#', s--;
        }
        return v;
    }
};