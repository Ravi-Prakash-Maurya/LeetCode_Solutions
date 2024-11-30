class Solution {
public:
    string capitalizeTitle(string title) {
        istringstream i(title);
        string w, s;
        while(i >> w) {
            for(char &c : w) c = tolower(c);
            if(w.size() > 2) w[0] -= 32;
            s += w + " ";
        }
        s.pop_back();
        return s;
    }
};