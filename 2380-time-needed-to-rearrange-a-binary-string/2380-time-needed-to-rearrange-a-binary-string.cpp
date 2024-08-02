class Solution {
public:
    bool containOne(string s, int i) {
        for(int j = i; j < s.size(); j++) {
            if(s[i] == '1') return true;
        }
        return false;
    }
    int secondsToRemoveOccurrences(string s) {
        int x = 0;
        while (true) {
            bool f = false;
            for (int i = 0; i < s.size() - 1; i++)
                if (s[i] == '0' && s[i + 1] == '1') {
                    swap(s[i], s[i + 1]);
                    i++;
                    f = true;
                }
            if (f) x++;
            else break;
        }
        return x;
    }
};