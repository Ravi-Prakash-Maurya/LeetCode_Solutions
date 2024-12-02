class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream s(sentence);
        string w;
        int i = 1;
        while(s >> w) {
            if(w.find(searchWord) == 0) return i;
            i++;
        }
        return -1;
    }
};