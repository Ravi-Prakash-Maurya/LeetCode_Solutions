class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int x = t.length();
        for(int i = 0; i<x ; i++)
        {
            if(s[i] != t[i])
            {
                return t[i];
            }
        }
        return t[x-1];
    }
};