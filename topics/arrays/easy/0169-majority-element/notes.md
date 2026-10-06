# 0169 · Majority Element

**Difficulty:** Easy
**Topic:** Arrays, Hash Map
**LeetCode:** https://leetcode.com/problems/majority-element/

---

## Problem summary
Given an array of size `n`, return the element that appears more than `⌊n/2⌋` times. A majority element is guaranteed to exist.

---

## Approach 1 — Boyer-Moore voting (optimal)
Keep a `candidate` and a `count`. When `count` hits 0, adopt the current element as the new candidate. Matching elements add 1, others subtract 1.

**Time:** O(n)  **Space:** O(1)

## Approach 2 — Hash map count
Count occurrences and return the element whose count exceeds `n/2`.

**Time:** O(n)  **Space:** O(n)

---

## Key insight
Every non-majority element can cancel at most one occurrence of the majority element. Since the majority appears more than half the time, it survives all the cancellations, so the final candidate is the answer.
