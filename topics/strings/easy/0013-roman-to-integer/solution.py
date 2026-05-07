# 0013 · Roman to Integer
# Approach: Right-to-left scan | Time: O(n) | Space: O(1)

class Solution:
    def romanToInt(self, s: str) -> int:
        values = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                  'C': 100, 'D': 500, 'M': 1000}
        result = 0
        max_seen = 0
        for ch in reversed(s):
            val = values[ch]
            if val < max_seen:
                result -= val
            else:
                result += val
                max_seen = val
        return result
