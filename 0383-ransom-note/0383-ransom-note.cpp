class Solution {
public:
    bool canConstruct(string r, string m) {
        sort(r.begin(), r.end());
        sort(m.begin(), m.end());
        int i = 0, j = 0;
        while(i < r.size() && j < m.size()) {
            if(r[i] == m[j]) {
                i++;
                j++;
            }
            else if(r[i] != m[j])
                j++;
        }
        return i == r.size();
    }
};