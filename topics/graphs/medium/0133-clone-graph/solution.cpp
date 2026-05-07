// 0133 · Clone Graph
// Approach: DFS with hash map | Time: O(V+E) | Space: O(V)

#include <vector>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(int v) : val(v) {}
};

class Solution {
    unordered_map<Node*, Node*> cloned;

    Node* dfs(Node* node) {
        if (!node) return nullptr;
        if (cloned.count(node)) return cloned[node];
        Node* copy = new Node(node->val);
        cloned[node] = copy;
        for (Node* neighbor : node->neighbors)
            copy->neighbors.push_back(dfs(neighbor));
        return copy;
    }
public:
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};
