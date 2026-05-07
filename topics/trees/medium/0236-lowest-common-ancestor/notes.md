# 0236 · Lowest Common Ancestor of a Binary Tree

**Difficulty:** Medium
**Topic:** Trees, DFS
**LeetCode:** https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

---

## Problem summary
Given the root of a binary tree and two nodes `p` and `q`, find their lowest common ancestor (LCA) — the deepest node that has both `p` and `q` as descendants (a node is a descendant of itself).

---

## Approach 1 — Recursive DFS (optimal)
If the current node is null, `p`, or `q`, return it.
Recurse left and right. If both return non-null, the current node is the LCA.
If only one side returns non-null, propagate that result upward.

**Time:** O(n)  **Space:** O(h)

---

## Key insight
The function elegantly combines search and result propagation in one pass: a non-null return from both children means "both targets found below me, so I am the LCA." A non-null from only one side means "the LCA (or one target) is deeper on that side."
