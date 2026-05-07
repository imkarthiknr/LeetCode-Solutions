# 0238 · Product of Array Except Self

**Difficulty:** Medium
**Topic:** Arrays, Prefix Products
**LeetCode:** https://leetcode.com/problems/product-of-array-except-self/

---

## Problem summary
Return an array `output` where `output[i]` is the product of all elements in `nums` except `nums[i]`. Must run in O(n) without using division.

---

## Approach 1 — Prefix and suffix products (optimal)
Two passes:
1. Forward pass: `output[i]` = product of all elements to the left of `i`.
2. Backward pass: multiply each `output[i]` by the running product of all elements to the right.

**Time:** O(n)  **Space:** O(1) extra (output array doesn't count)

## Approach 2 — Brute force
For each index, multiply all other elements.

**Time:** O(n²)  **Space:** O(1)

---

## Key insight
The trick is that `result[i] = left_product[i] * right_product[i]`. We compute the left products in-place in the output array, then fold in the right products with a single right-to-left pass using a running variable.
