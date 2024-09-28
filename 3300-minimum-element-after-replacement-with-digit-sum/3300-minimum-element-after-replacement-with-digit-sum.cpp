class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for (int& i : nums) i = sumOfDigits(i);
        return *min_element(nums.begin(), nums.end());
    }
};
