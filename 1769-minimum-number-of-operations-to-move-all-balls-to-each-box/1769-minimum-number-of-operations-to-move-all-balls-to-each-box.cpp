class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> vec, pos;
        for(int i = 0; i < boxes.size(); i++) if(boxes[i] == '1') pos.push_back(i);
        for(int i = 0; i < boxes.size(); i++) {
            int sum = 0;
            for(int a : pos) sum += abs(a - i);
            vec.push_back(sum);
        }
        return vec;
    }
};