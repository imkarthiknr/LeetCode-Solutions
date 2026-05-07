# 0198 · House Robber
# Approach: DP (two variables) | Time: O(n) | Space: O(1)

from typing import List


class Solution:
    def rob(self, nums: List[int]) -> int:
        prev2, prev1 = 0, 0
        for num in nums:
            prev2, prev1 = prev1, max(prev1, prev2 + num)
        return prev1
