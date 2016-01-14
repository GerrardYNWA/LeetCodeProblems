class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        output = [1, 1]
        length = len(nums)
        for i in range(0, length):
            for j in range(i+1, length):
                if nums[i] + nums[j] == target:
                    output[0] = i+1
                    output[1] = j+1
                    return output
        