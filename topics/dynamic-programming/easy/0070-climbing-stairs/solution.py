# 0070 · Climbing Stairs
# Approach: DP (Fibonacci) | Time: O(n) | Space: O(1)

class Solution:
    def climbStairs(self, n: int) -> int:
        a, b = 1, 1
        for _ in range(n - 1):
            a, b = b, a + b
        return b
