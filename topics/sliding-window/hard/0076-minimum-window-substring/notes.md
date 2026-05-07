# 0076 · Minimum Window Substring

**Difficulty:** Hard
**Topic:** Sliding Window, Hash Map
**LeetCode:** https://leetcode.com/problems/minimum-window-substring/

---

## Problem summary
Given strings `s` and `t`, return the shortest substring of `s` that contains every character of `t` (including duplicates). Return `""` if none exists.

---

## Approach 1 — Sliding window with frequency counts (optimal)
- Count required frequencies from `t`.
- Expand `right` to include characters; track how many distinct required chars are fully satisfied (`formed`).
- Once all chars are satisfied, shrink from `left` to minimise the window, updating the answer each time.

**Time:** O(|s| + |t|)  **Space:** O(|s| + |t|)

---

## Key insight
The `formed` counter avoids re-checking the entire frequency map on every step — we only update it when a character's window count exactly meets (or drops below) the required count. This keeps the inner loop O(1) per move.
