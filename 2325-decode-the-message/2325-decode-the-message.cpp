class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> m;
        char c = 'a';
        for(char q : key) if(q != ' ' && m.find(q) == m.end()) m[q] = c++;
        for(char &q : message) if(m.find(q) != m.end()) q = m[q];
        return message;
    }
};