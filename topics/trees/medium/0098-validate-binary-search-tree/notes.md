# 0098 · Validate Binary Search Tree

**Difficulty:** Medium
**Topic:** Trees, DFS
**LeetCode:** https://leetcode.com/problems/validate-binary-search-tree/

---

## Problem summary
Given the root of a binary tree, determine if it is a valid BST. A valid BST requires every node in the left subtree to be strictly less than the current node, and every node in the right subtree to be strictly greater.

---

## Approach 1 — DFS with min/max bounds (optimal)
Pass down allowed `(min, max)` bounds. Each node must satisfy `min < node.val < max`.
Left child tightens the upper bound; right child tightens the lower bound.

**Time:** O(n)  **Space:** O(h)

## Approach 2 — Inorder traversal
An inorder traversal of a BST yields a strictly increasing sequence. Verify that each value is greater than the previous one.

**Time:** O(n)  **Space:** O(h)

---

## Key insight
The common mistake is only checking parent-child relationships locally. The bounds approach correctly enforces the global BST property across the whole subtree without extra memory.
