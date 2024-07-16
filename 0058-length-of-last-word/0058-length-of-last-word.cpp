class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = 0;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && a != 0)
                return a;
            else if(s[i] != ' ')
                a++;
        }
        return a;
    }
};