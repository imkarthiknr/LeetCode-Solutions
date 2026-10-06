# 1752 · Check if Array Is Sorted and Rotated

**Difficulty:** Easy
**Topic:** Arrays
**LeetCode:** https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

---

## Problem summary
Return `true` if the array was originally sorted in non-decreasing order and then rotated some number of positions (possibly zero).

---

## Approach 1 — Count circular descents (optimal)
Walk the array treating it as circular (`nums[i]` vs `nums[(i+1) % n]`) and count positions where the value drops. A sorted-then-rotated array has at most one drop.

**Time:** O(n)  **Space:** O(1)

---

## Key insight
Rotating a sorted array moves the wrap-around point into the middle, so the single place where the order breaks is the rotation point. Comparing the last element with the first closes the circle, which also covers the unrotated case (zero drops). Equal neighbours are not a drop, so duplicates are handled.
