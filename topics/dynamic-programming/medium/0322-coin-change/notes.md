# 0322 · Coin Change

**Difficulty:** Medium
**Topic:** Dynamic Programming, BFS
**LeetCode:** https://leetcode.com/problems/coin-change/

---

## Problem summary
Given coin denominations and a target amount, return the fewest number of coins needed to make that amount. Return -1 if it's impossible.

---

## Approach 1 — Bottom-up DP (optimal)
Build a `dp` array of size `amount + 1`, initialised to infinity.
`dp[0] = 0`. For each amount from 1 to `amount`:
`dp[i] = min(dp[i], dp[i - coin] + 1)` for each coin ≤ i.

**Time:** O(amount × n_coins)  **Space:** O(amount)

## Approach 2 — BFS (finds minimum steps naturally)
Treat amounts as graph nodes; each coin is an edge of weight 1.
BFS from 0 finds the shortest path (fewest coins) to `amount`.

**Time:** O(amount × n_coins)  **Space:** O(amount)

---

## Key insight
Bottom-up DP is preferred here because every sub-problem is needed. The BFS framing helps explain *why* it finds the minimum: it's shortest-path in an unweighted graph.
