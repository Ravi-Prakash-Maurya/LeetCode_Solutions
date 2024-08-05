class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        for(string s : arr) m[s]++;
        vector<string> vec;
        for(string s : arr) {
            if(m[s] > 1) continue;
            else vec.push_back(s);
        }
        if(k > vec.size()) return "";
        else return vec[k - 1];
    }
};