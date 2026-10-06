# 1752 · Check if Array Is Sorted and Rotated
# Approach: Count circular descents | Time: O(n) | Space: O(1)

from typing import List


class Solution:
    def check(self, nums: List[int]) -> bool:
        n = len(nums)
        drops = 0
        for i in range(n):
            if nums[i] > nums[(i + 1) % n]:
                drops += 1
                if drops > 1:
                    return False
        return True
