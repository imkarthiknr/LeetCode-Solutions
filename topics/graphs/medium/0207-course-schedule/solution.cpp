// 0207 · Course Schedule
// Approach: DFS cycle detection | Time: O(V+E) | Space: O(V+E)

#include <vector>
#include <queue>
using namespace std;

class Solution {
    vector<vector<int>> graph;
    vector<int> state;

    bool dfs(int node) {
        if (state[node] == 1) return false;
        if (state[node] == 2) return true;
        state[node] = 1;
        for (int neighbor : graph[node])
            if (!dfs(neighbor)) return false;
        state[node] = 2;
        return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph.assign(numCourses, {});
        state.assign(numCourses, 0);
        for (auto& p : prerequisites)
            graph[p[1]].push_back(p[0]);
        for (int i = 0; i < numCourses; i++)
            if (!dfs(i)) return false;
        return true;
    }
};
