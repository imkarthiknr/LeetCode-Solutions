# 0001 · Two Sum

**Difficulty:** Easy
**Topic:** Arrays, Hash Map
**LeetCode:** https://leetcode.com/problems/two-sum/

---

## Problem summary
Given an integer array and a target, return the indices of the two numbers that add up to the target. Exactly one solution exists.

---

## Approach 1 — Hash map (optimal)
Iterate once. For each element, check if `target - element` is already in the map.
If yes, return the stored index and the current index.
If no, store the current element and its index.

**Time:** O(n)  **Space:** O(n)

## Approach 2 — Brute force
Try every pair with two nested loops.

**Time:** O(n²)  **Space:** O(1)

---

## Key insight
The hash map trades space for time — instead of searching the rest of the array on each step, we remember what we've already seen in O(1) lookups.
