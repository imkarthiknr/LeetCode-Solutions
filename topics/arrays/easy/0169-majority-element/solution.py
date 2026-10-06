# 0169 · Majority Element
# Approach: Boyer-Moore voting | Time: O(n) | Space: O(1)

from collections import Counter
from typing import List


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate, count = 0, 0
        for num in nums:
            if count == 0:
                candidate = num
            count += 1 if num == candidate else -1
        return candidate


# Approach 2: Hash map count | Time: O(n) | Space: O(n)
class SolutionHashMap:
    def majorityElement(self, nums: List[int]) -> int:
        counts = Counter(nums)
        return max(counts, key=counts.get)
