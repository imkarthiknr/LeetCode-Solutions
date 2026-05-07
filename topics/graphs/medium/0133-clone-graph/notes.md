# 0133 · Clone Graph

**Difficulty:** Medium
**Topic:** Graphs, DFS, BFS, Hash Map
**LeetCode:** https://leetcode.com/problems/clone-graph/

---

## Problem summary
Given a reference to a node in a connected undirected graph, return a deep copy of the graph. Each node has a value and a list of neighbors.

---

## Approach 1 — DFS with hash map (optimal)
Use a hash map `{original_node → cloned_node}` to avoid revisiting.
For each node: if already cloned, return its clone. Otherwise, create a clone, store it in the map, then recursively clone all neighbors.

**Time:** O(V + E)  **Space:** O(V)

## Approach 2 — BFS with hash map
Same map strategy; use a queue instead of recursion.

**Time:** O(V + E)  **Space:** O(V)

---

## Key insight
The hash map serves a dual purpose: it tracks visited nodes (preventing infinite loops in cyclic graphs) and stores the mapping from original to clone so neighbors can be wired up correctly.
