class Solution(object):
    def dominantIndices(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        dom = 0

        for i in range(n-1):
            right_sum = sum(nums[i+1:])
            count_r = n-1-i

            avg = right_sum/count_r

            if nums[i] > avg:
                dom+=1
        return dom