class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int x = 0, c = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 1) c++;
            else c = 0;
            x = max(x, c);
        }
        return x > 2 ? true : false;
    }
};