class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        sort(nums.begin(), nums.end());
        double x;
        if(nums.size() % 2 == 0)
        {
            x = (nums[nums.size()/2] + nums[(nums.size()/2) - 1])/2.0;
        }
        else
        {
            x = nums[(nums.size()-1)/2];
        }
        return x;
    }
};