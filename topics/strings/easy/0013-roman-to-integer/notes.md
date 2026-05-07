# 0013 · Roman to Integer

**Difficulty:** Easy
**Topic:** Strings, Hash Map
**LeetCode:** https://leetcode.com/problems/roman-to-integer/

---

## Problem summary
Convert a Roman numeral string to its integer value. Roman numerals use subtractive notation: if a smaller value appears before a larger one (e.g. IV = 4), subtract rather than add.

---

## Approach 1 — Right-to-left scan (optimal)
Iterate from right to left. If the current symbol's value is less than the maximum seen so far, subtract it; otherwise add it.

**Time:** O(n)  **Space:** O(1)

## Approach 2 — Left-to-right with lookahead
Iterate left to right. If the current value is less than the next value, subtract the current; otherwise add it.

**Time:** O(n)  **Space:** O(1)

---

## Key insight
Both approaches exploit the same subtractive rule. The right-to-left version avoids a lookahead by tracking the running maximum — any symbol smaller than the largest symbol seen to its right must be subtracted.
