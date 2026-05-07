# 0104 · Maximum Depth of Binary Tree

**Difficulty:** Easy
**Topic:** Trees, DFS, BFS
**LeetCode:** https://leetcode.com/problems/maximum-depth-of-binary-tree/

---

## Problem summary
Given the root of a binary tree, return its maximum depth (the number of nodes along the longest root-to-leaf path).

---

## Approach 1 — Recursive DFS (optimal)
The depth of a node is `1 + max(depth(left), depth(right))`. Base case: null node returns 0.

**Time:** O(n)  **Space:** O(h) where h is tree height (O(n) worst case for skewed tree)

## Approach 2 — Iterative BFS (level order)
Count levels using a queue. Increment depth each time you finish a level.

**Time:** O(n)  **Space:** O(n)

---

## Key insight
Recursion maps perfectly to the tree structure here — the call stack handles the traversal implicitly. BFS is useful when you need level information, but for pure depth, DFS is simpler.
