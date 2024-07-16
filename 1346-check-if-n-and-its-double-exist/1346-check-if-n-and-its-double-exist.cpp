class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++) {
            int x = arr[i] * 2;
            if (x == 0) {
                if (count(arr.begin(), arr.end(), 0) > 1)
                    return true;
            } else {
                if (find(arr.begin(), arr.end(), x) != arr.end())
                    return true;
            }
        }
        return false;
    }
};