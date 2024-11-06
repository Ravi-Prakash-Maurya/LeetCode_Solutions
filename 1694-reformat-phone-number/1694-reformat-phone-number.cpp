class Solution {
public:
    string reformatNumber(string number) {
        string s, r;
        for(char c : number) if(isdigit(c)) s += c;
        int n = s.size(),i = 0;
        while(n - i > 4) r += s.substr(i, 3) + "-", i += 3;
        if(n - i == 4) r += s.substr(i, 2) + "-" + s.substr(i + 2, 2);
        else r += s.substr(i);
        return r;
    }
};
