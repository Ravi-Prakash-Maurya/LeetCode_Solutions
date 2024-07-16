class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vec;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vec.push_back(i);
        int j = 0, k = vec.size() - 1;
        while(j < k) {
            char c = s[vec[j]];
            s[vec[j]] = s[vec[k]];
            s[vec[k]] = c;
            j++;
            k--;
        }
        return s;
    }
};