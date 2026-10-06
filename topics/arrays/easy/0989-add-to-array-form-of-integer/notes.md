# 0989 · Add to Array-Form of Integer

**Difficulty:** Easy
**Topic:** Arrays, Math
**LeetCode:** https://leetcode.com/problems/add-to-array-form-of-integer/

---

## Problem summary
`num` holds the digits of a (possibly huge) integer, most significant first. Return the array form of `num + k`.

---

## Approach 1 — Add into `k` from the right (optimal)
Walk `num` from the last digit. Add each digit into `k`, emit `k % 10` as the next result digit, and keep `k / 10` as the carry. Continue while digits or carry remain, then reverse.

**Time:** O(max(n, log k))  **Space:** O(1) extra (output aside)

---

## Key insight
Reusing `k` as both the addend and the carry removes the need for a separate carry variable and handles the case where `k` has more digits than `num`. Never convert `num` to an integer: it can have 10⁴ digits and would overflow fixed-width types.
