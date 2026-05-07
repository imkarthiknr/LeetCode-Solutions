# 0207 · Course Schedule

**Difficulty:** Medium
**Topic:** Graphs, Topological Sort, DFS, BFS
**LeetCode:** https://leetcode.com/problems/course-schedule/

---

## Problem summary
There are `numCourses` courses (0 to n-1). Some have prerequisites: `[a, b]` means you must take `b` before `a`. Return true if you can finish all courses (i.e., there is no cycle in the dependency graph).

---

## Approach 1 — DFS cycle detection (3-colour)
Use three states per node: unvisited (0), in current path (1), fully processed (2).
A cycle exists if we reach a node that is currently in the path (state 1).

**Time:** O(V + E)  **Space:** O(V + E)

## Approach 2 — BFS / Kahn's algorithm (topological sort)
Compute in-degrees. Process nodes with in-degree 0 via a queue.
If all nodes are processed, there's no cycle.

**Time:** O(V + E)  **Space:** O(V + E)

---

## Key insight
The problem reduces to cycle detection in a directed graph. DFS with the 3-colour scheme is concise. Kahn's algorithm is intuitive because finishing all courses corresponds to a valid topological ordering existing.
