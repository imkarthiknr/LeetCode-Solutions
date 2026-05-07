# 0121 · Best Time to Buy and Sell Stock

**Difficulty:** Easy
**Topic:** Arrays, Sliding Window
**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

---

## Problem summary
Given an array where `prices[i]` is the price on day `i`, find the maximum profit from one buy-sell transaction. You must buy before you sell.

---

## Approach 1 — Single pass (optimal)
Track the minimum price seen so far. At each day, compute profit if selling today, and update the running maximum.

**Time:** O(n)  **Space:** O(1)

## Approach 2 — Brute force
Try every buy/sell pair.

**Time:** O(n²)  **Space:** O(1)

---

## Key insight
We never need to reconsider a buy day once we've seen a lower price — the optimal buy is always the global minimum to the left of the sell day.
