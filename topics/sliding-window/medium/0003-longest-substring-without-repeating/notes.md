# 0003 · Longest Substring Without Repeating Characters

**Difficulty:** Medium
**Topic:** Sliding Window, Hash Map
**LeetCode:** https://leetcode.com/problems/longest-substring-without-repeating-characters/

---

## Problem summary
Given a string, find the length of the longest substring that contains no duplicate characters.

---

## Approach 1 — Sliding window with hash map (optimal)
Maintain a window `[left, right]`. Expand right each step; when a duplicate is found, advance `left` past the previous occurrence of that character.
Store each character's most recent index in a hash map.

**Time:** O(n)  **Space:** O(min(n, alphabet_size))

## Approach 2 — Sliding window with set
Same idea but use a set; shrink the window one step at a time from the left until the duplicate is removed.

**Time:** O(n)  **Space:** O(min(n, alphabet_size))

---

## Key insight
The hash map approach skips directly to the correct new left boundary in O(1), whereas the set approach may take multiple steps to shrink — both are O(n) overall but the map version has a smaller constant.
