class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.size() > sentence2.size()) swap(sentence1, sentence2);
        vector<string> words1, words2;
        istringstream iss1(sentence1), iss2(sentence2);
        string word;
        while(iss1 >> word) words1.push_back(word);
        while(iss2 >> word) words2.push_back(word);
        int i = 0, j = 0, n1 = words1.size(), n2 = words2.size();
        while(i < n1 && words1[i] == words2[i]) i++;
        while(j < n1 && words1[n1 - 1 - j] == words2[n2 - 1 - j]) j++;
        return i + j >= n1;
    }
};
