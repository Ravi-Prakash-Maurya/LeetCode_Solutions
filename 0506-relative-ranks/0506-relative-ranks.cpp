#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> vec;
        vector<int> x = score;
        sort(x.begin(), x.end(), greater<int>());
        for(int i : score) {
            auto t = find(x.begin(), x.end(), i);
            int j = distance(x.begin(), t);
            int a = j + 1;
            if(a == 1) vec.push_back("Gold Medal");
            else if(a == 2) vec.push_back("Silver Medal");
            else if(a == 3) vec.push_back("Bronze Medal");
            else vec.push_back(to_string(a));
        }
        return vec;
    }
};
