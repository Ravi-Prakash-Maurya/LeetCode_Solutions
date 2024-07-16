class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> vec = digits;
        for (int i = digits.size() - 1 ; i >= 0 ; i--) {
            
            if(vec[i] != 9) {
                vec[i]++;
                break;
            }
            else vec[i] = 0;
        }
        if (vec[0] == 0) vec.insert(vec.begin(), 1);
        return vec;
    }
};