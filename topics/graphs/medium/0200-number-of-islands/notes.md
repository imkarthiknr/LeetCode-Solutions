# 0200 · Number of Islands

**Difficulty:** Medium
**Topic:** Graphs, DFS, BFS, Union-Find
**LeetCode:** https://leetcode.com/problems/number-of-islands/

---

## Problem summary
Given a 2D grid of `'1'` (land) and `'0'` (water), count the number of islands. An island is surrounded by water and formed by connecting adjacent land cells horizontally or vertically.

---

## Approach 1 — DFS flood fill (optimal for simplicity)
Each time we find an unvisited `'1'`, increment the island count and DFS to mark the entire island as visited (set cells to `'0'`).

**Time:** O(m × n)  **Space:** O(m × n) worst case stack depth

## Approach 2 — BFS flood fill
Same idea but uses a queue instead of the call stack. Preferred for very large grids to avoid stack overflow.

**Time:** O(m × n)  **Space:** O(min(m, n))

---

## Key insight
Flood fill (DFS/BFS) effectively "merges" all cells of one island, so we count each island exactly once. Mutating the input is a common interview trade-off; if the grid must be preserved, use a `visited` set instead.
