class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = -1, n = haystack.size(), m = needle.size();
        string s = "";
        for(int i = 0; i <= n - m; i++) {
            s = haystack.substr(i, m);
            if(s == needle) {
                x = i;
                break;
            }
        }
        return x;
    }
};