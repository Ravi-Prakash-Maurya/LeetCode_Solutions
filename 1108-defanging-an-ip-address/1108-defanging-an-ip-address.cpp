class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(char c : address)
        {
            if(c == '.')
                s += "[.]";
            else
                s += c;
        }
        return s;
    }
};