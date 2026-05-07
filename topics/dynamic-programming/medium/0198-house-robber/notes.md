# 0198 · House Robber

**Difficulty:** Medium
**Topic:** Dynamic Programming
**LeetCode:** https://leetcode.com/problems/house-robber/

---

## Problem summary
Given an array of non-negative integers representing the amount of money in each house, find the maximum amount you can rob without robbing two adjacent houses.

---

## Approach 1 — DP with two variables (optimal)
At each house, either skip it (keep the previous best) or rob it (add its value to the best from two houses back).
`dp[i] = max(dp[i-1], dp[i-2] + nums[i])`
Only the last two values are needed.

**Time:** O(n)  **Space:** O(1)

---

## Key insight
The recurrence captures the constraint cleanly: robbing house `i` forces you to skip `i-1`, so you look back two steps. The two-variable trick avoids the array.
