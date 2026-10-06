# 0414 · Third Maximum Number
# Approach: Track top three distinct values | Time: O(n) | Space: O(1)

from typing import List


class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        first = second = third = None
        for num in nums:
            if num in (first, second, third):
                continue
            if first is None or num > first:
                first, second, third = num, first, second
            elif second is None or num > second:
                second, third = num, second
            elif third is None or num > third:
                third = num
        return third if third is not None else first


# Approach 2: Set + sort | Time: O(n log n) | Space: O(n)
class SolutionSort:
    def thirdMax(self, nums: List[int]) -> int:
        distinct = sorted(set(nums), reverse=True)
        return distinct[2] if len(distinct) >= 3 else distinct[0]
