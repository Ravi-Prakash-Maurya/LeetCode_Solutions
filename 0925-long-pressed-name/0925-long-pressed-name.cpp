class Solution {
public:
    bool isLongPressedName(string n, string t) {
        int i = 0, j = 0;
        while(j < t.size()) {
            if(i < n.size() && n[i] == t[j]) {
                i++;
                j++;
            } else if(j > 0 && t[j] == t[j - 1]) {
                j++;
            } else
                return false;
        }
        return i == n.size();
    }
};