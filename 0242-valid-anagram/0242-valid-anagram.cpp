class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag = true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size() == t.size())
        {
            for(int i = 0 ; i < s.size() ; i++)
            {
                if(s[i] != t[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            flag = false;
        }
        return flag;
    }
};