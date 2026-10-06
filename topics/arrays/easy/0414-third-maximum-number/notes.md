# 0414 · Third Maximum Number

**Difficulty:** Easy
**Topic:** Arrays
**LeetCode:** https://leetcode.com/problems/third-maximum-number/

---

## Problem summary
Return the third *distinct* maximum in the array. If there are fewer than three distinct values, return the maximum.

---

## Approach 1 — Track top three (optimal)
Keep `first`, `second`, `third` (initially unset). Skip duplicates, then shift values down whenever a new one beats a slot. The C++ version gets the same effect with an ordered set capped at three elements.

**Time:** O(n)  **Space:** O(1)

## Approach 2 — Set + sort [Python]
Deduplicate, sort descending, and take index 2 if it exists, otherwise index 0.

**Time:** O(n log n)  **Space:** O(n)

---

## Key insight
Use "unset" rather than `-inf` as the sentinel. Inputs can legitimately contain `INT_MIN`, so a numeric sentinel would be indistinguishable from real data. Duplicates must be skipped before comparing, because "distinct" is part of the definition.
