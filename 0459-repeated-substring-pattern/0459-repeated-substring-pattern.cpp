// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         bool flag = false;
//         string k = "";
//         string p = "";
//         k = s[0];
//         for(int i = 1; i < s.size(); i++)
//         {
//         }
//         string q = "";
//         int x = s.size() / k.size();
//         for(int i = 0; i < x; i++)
//         {
//             q += k;
//         }
//         if(q == s && s.size() != 1)
//         {
//             flag = true;
//         }
//         return flag;
//     }
// };
class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.size();
        for (int len = 1; len <= n / 2; len++) 
        {
            if (n % len == 0) 
            {
                string substring = s.substr(0, len);
                string constructedString = "";
                for (int i = 0; i < n / len; i++) 
                {
                    constructedString += substring;
                }
                if (constructedString == s) 
                {
                    return true;
                }
            }
        }
        return false;
    }
};