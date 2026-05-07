# 0076 · Minimum Window Substring
# Approach: Sliding window + frequency counts | Time: O(|s|+|t|) | Space: O(|s|+|t|)

from collections import Counter


class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not t or not s:
            return ""

        need = Counter(t)
        required = len(need)
        formed = 0
        window = {}

        left = 0
        best = float('inf'), 0, 0

        for right, ch in enumerate(s):
            window[ch] = window.get(ch, 0) + 1
            if ch in need and window[ch] == need[ch]:
                formed += 1

            while formed == required:
                if right - left + 1 < best[0]:
                    best = (right - left + 1, left, right)
                lch = s[left]
                window[lch] -= 1
                if lch in need and window[lch] < need[lch]:
                    formed -= 1
                left += 1

        return "" if best[0] == float('inf') else s[best[1]: best[2] + 1]
