# problem 1 : https://leetcode.com/problems/two-sum/submissions/1625319235/
def problem():
    class Solution(object):
        def twoSum(self, nums, target):
            """
            :type nums: List[int]
            :type target: int
            :rtype: List[int]
            """
            for i in range(len(nums)):
                for j in range(i+1,len(nums)):
                    if nums[j] == target - nums[i]:
                        return[i,j]
            return []