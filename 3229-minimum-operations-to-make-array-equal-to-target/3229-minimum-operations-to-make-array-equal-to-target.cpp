class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        long long x = 0;
        vector<int> vec;
        for(int i = 0; i < nums.size(); i++) vec.push_back(target[i] - nums[i]);
        int n = vec.size(), last = vec[0];
        if(vec.size() == 1) return abs(last);
        else if(vec.size() == 2) {
            if((vec[0] >= 0 && vec[1] >= 0) || (vec[0] < 0 && vec[1] < 0)) 
                return max(abs(vec[0]), abs(vec[1]));
            else if((vec[0] >= 0 && vec[1] < 0) || (vec[0] < 0 && vec[1] >= 0))
                return abs(vec[0]) + abs(vec[1]);
        } else {
            x += abs(last);
            bool f = last >= 0;
            for(int i = 1; i < n - 1; i++) {
                if(f){
                    if(vec[i] == last) continue;
                    if(last < vec[i] && vec[i] > vec[i+1]) {
                        x += abs(vec[i] - last);
                        last = vec[i];
                        f = last >= 0;
                    }
                    else if(last > vec[i] && vec[i] < vec[i+1]) {
                        if(vec[i] < 0) x += abs(vec[i]);
                        last = vec[i];
                        f = last >= 0;
                    }
                } else {
                    if(vec[i] == last) continue;
                    if(last < vec[i] && vec[i] > vec[i+1]) {
                        if(vec[i] > 0) x += abs(vec[i]);
                        last = vec[i];
                        f = last >= 0;
                    }
                    else if(last > vec[i] && vec[i] < vec[i+1]) {
                        x += abs(vec[i] - last);
                        last = vec[i];
                        f = last >= 0;
                    }
                }
            }
            if(last >= 0 && vec[n - 1] > 0 && vec[n - 1] > last) x += abs(vec[n - 1] - last);
            else if(last < 0 && vec[n - 1] > 0) x += abs(vec[n - 1]);
            else if(last >= 0 && vec[n - 1] < 0) x += abs(vec[n - 1]);
            else if(last < 0 && vec[n - 1] < 0 && vec[n - 1] < last) x += abs(vec[n - 1] - last);
        }
        return x;
    }
};
