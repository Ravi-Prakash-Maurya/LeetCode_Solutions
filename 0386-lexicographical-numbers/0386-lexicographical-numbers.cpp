class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> nv(n);
        for(int i = 0; i < n; i++) nv[i] = to_string(i + 1);
        sort(nv.begin(), nv.end());
        vector<int> v(n);
        for(int i = 0; i < n; i++) v[i] = stoi(nv[i]);
        return v;
    }
};