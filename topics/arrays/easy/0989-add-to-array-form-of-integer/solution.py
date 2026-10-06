# 0989 · Add to Array-Form of Integer
# Approach: Digit-by-digit addition from the right | Time: O(max(n, log k)) | Space: O(1) extra

from typing import List


class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        result = []
        i = len(num) - 1
        while i >= 0 or k > 0:
            if i >= 0:
                k += num[i]
                i -= 1
            k, digit = divmod(k, 10)
            result.append(digit)
        return result[::-1]
