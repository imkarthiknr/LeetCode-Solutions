# 0070 · Climbing Stairs

**Difficulty:** Easy
**Topic:** Dynamic Programming
**LeetCode:** https://leetcode.com/problems/climbing-stairs/

---

## Problem summary
You can climb 1 or 2 steps at a time. How many distinct ways are there to reach the top of an `n`-step staircase?

---

## Approach 1 — DP / Fibonacci (optimal)
`ways(n) = ways(n-1) + ways(n-2)`. Only the last two values are needed, so use two variables instead of an array.

**Time:** O(n)  **Space:** O(1)

## Approach 2 — Memoised recursion
Recursive with a cache. Equivalent in complexity but uses the call stack.

**Time:** O(n)  **Space:** O(n)

---

## Key insight
This is exactly the Fibonacci sequence (offset by one). The recurrence holds because the only way to reach step `n` is from step `n-1` (take 1 step) or step `n-2` (take 2 steps).
