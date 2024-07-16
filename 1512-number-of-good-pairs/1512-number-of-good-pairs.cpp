// class Solution {
// public:
//     int fac(int n)
//     {
//         if(n == 0 || n == 1)
//             return 1;
//         else
//             return n * fac(n-1);
//     }
//     int numIdenticalPairs(vector<int>& nums) {
//         unordered_map<int,int> ans;
//         for(auto num : nums)
//         {
//             ans[num]++;
//         }
//         int x = 0;
//         for(auto freq : ans)
//         {
//             if(freq.second > 1)
//             {
//                 x = x + fac(freq.second)/(2*fac(freq.second-2));
//             }
//         }
//         return x;
//     }
// };
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = 0;
        for(int i = 0; i < nums.size(); i++)
            for(int j = i+1; j < nums.size(); j++)
                if(nums[i] == nums[j])
                    x++;
        return x;
    }
};