class Solution {
public:
    bool strongPasswordCheckerII(string pass) {
        int d = 0, l = 0, u = 0, s = 0;
        string t = "!@#$%^&*()-+";
        for(int i = 0; i < pass.size(); i++) {
            if(islower(pass[i])) l++;
            else if(isupper(pass[i])) u++;
            else if(isdigit(pass[i])) d++;
            else if(t.find(pass[i]) != string::npos) s++;
            if(i < pass.size() - 1 && pass[i] == pass[i + 1]) return false;
        }
        if(d > 0 && l > 0 && u > 0 && s > 0 && (d + l + u + s) > 7) return true;
        return false;
    }
};