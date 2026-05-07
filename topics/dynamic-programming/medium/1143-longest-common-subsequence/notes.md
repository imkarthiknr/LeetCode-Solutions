# 1143 · Longest Common Subsequence

**Difficulty:** Medium
**Topic:** Dynamic Programming
**LeetCode:** https://leetcode.com/problems/longest-common-subsequence/

---

## Problem summary
Given two strings `text1` and `text2`, return the length of their longest common subsequence. A subsequence doesn't need to be contiguous.

---

## Approach 1 — 2D DP (standard)
`dp[i][j]` = LCS length of `text1[:i]` and `text2[:j]`.
- If `text1[i-1] == text2[j-1]`: `dp[i][j] = dp[i-1][j-1] + 1`
- Else: `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`

**Time:** O(m × n)  **Space:** O(m × n)

## Approach 2 — Space-optimised DP
Only two rows of the table are needed at a time.

**Time:** O(m × n)  **Space:** O(min(m, n))

---

## Key insight
The recurrence expresses the two choices when characters don't match: skip from `text1` or skip from `text2`, and take the best. When they match, there's no benefit in skipping either.
