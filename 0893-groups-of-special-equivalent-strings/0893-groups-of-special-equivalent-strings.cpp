class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_map<string, int> m;
        for(string s : words) {
            string e, o;
            for(int i = 0; i < s.size(); i++)
                if(i % 2 == 0) e += s[i];
                else o += s[i];
            sort(e.begin(), e.end());
            sort(o.begin(), o.end());
            e += o;
            m[e]++;
        }
        return m.size();
    }
};