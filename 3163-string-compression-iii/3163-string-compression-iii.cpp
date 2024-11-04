class Solution {
public:
    string compressedString(string word) {
        string s;
        char c = word[0];
        int n = 0;
        for(char i : word) 
            if(c != i || n > 8) s += to_string(n) + c, c = i, n = 1;
            else n++;
        return s + to_string(n) + c;
    }
};