class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& n1, vector<int>& n2, vector<int>& n3) {
        set<int> s1(n1.begin(), n1.end()), s2(n2.begin(), n2.end()), s3(n3.begin(), n3.end());
        map<int, int> m;
        for(int n : s1) m[n]++;
        for(int n : s2) m[n]++;
        for(int n : s3) m[n]++;
        vector<int> v;
        for(auto [n, c] : m) if(c >= 2) v.push_back(n);      
        return v;
    }
};