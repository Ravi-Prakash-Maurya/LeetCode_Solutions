class Solution:
    def addToArrayForm(self, num, k):
        n = 0
        result = []

        for i in range(len(num)):
            n *= 10
            n += num[i]

        c = n + k

        while c > 0:
            result.insert(0, c % 10)
            c //= 10

        return result

# Example Usage:
# nums = [1, 2, 0, 0]
# k = 34
# solution = Solution()
# result = solution.addToArrayForm(nums, k)
# print(result)
