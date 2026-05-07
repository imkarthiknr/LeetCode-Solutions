# 0098 · Validate Binary Search Tree
# Approach: DFS with bounds | Time: O(n) | Space: O(h)

from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(node, lo, hi):
            if not node:
                return True
            if not (lo < node.val < hi):
                return False
            return validate(node.left, lo, node.val) and validate(node.right, node.val, hi)

        return validate(root, float('-inf'), float('inf'))
