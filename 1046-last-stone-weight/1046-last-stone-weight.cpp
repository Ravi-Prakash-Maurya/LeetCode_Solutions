class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i : stones) p.push(i);
        while(p.size() > 1) {
            int a = p.top(); p.pop();
            int b = p.top(); p.pop();
            if(a != b) p.push(a - b);
        }
        return p.empty() ? 0 : p.top();
    }
};