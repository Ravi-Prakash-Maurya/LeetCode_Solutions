class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        for(auto& t : logs) {
            if(t == "./") continue;
            else if(t == "../") {
                if(!s.empty()) s.pop();
            } else s.push(t);
        }
        return s.size();
    }
};