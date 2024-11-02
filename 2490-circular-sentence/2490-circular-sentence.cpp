class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> v;
        stringstream s(sentence);
        string word;
        while(s >> word) v.push_back(word);
        for(int i = 1; i < v.size(); i++) if(v[i - 1].back() != v[i].front()) return false;
        if(v.back().back() != v.front().front()) return false;
        return true;
    }
};