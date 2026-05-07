# LeetCode Solutions

> Python + C++ solutions with notes, complexity analysis, and multiple approaches.
>
> *Consistent problem solving. Clean solutions. Real explanations.*

## Running solutions

### Python

**Requirements:** Python 3.8+

Each `solution.py` is self-contained. The `Solution` class matches LeetCode's interface exactly, so you can paste it directly into the LeetCode editor, or run it locally by adding test calls at the bottom.

```bash
# Navigate to any problem folder
cd topics/arrays/easy/0001-two-sum

# Run directly
python solution.py
```

To test locally, append a quick call to the bottom of the file:

```python
if __name__ == "__main__":
    print(Solution().twoSum([2, 7, 11, 15], 9))  # [0, 1]
```

---

### C++

**Requirements:** any C++17 compiler — `g++` (GCC/MinGW), `clang++`, or MSVC

Each `solution.cpp` contains the `Solution` class only (no `main`). To run locally, add a `main` and compile:

```bash
cd topics/arrays/easy/0001-two-sum

# Compile
g++ -std=c++17 -o solution solution.cpp

# Run
./solution          # Linux / macOS / Git Bash
solution.exe        # Windows Command Prompt / PowerShell
```

A minimal `main` to test Two Sum:

```cpp
#include <iostream>
int main() {
    Solution sol;
    auto res = sol.twoSum({2, 7, 11, 15}, 9);
    std::cout << res[0] << ", " << res[1] << std::endl; // 0, 1
}
```

**Windows (MSVC):**

```powershell
cl /std:c++17 solution.cpp /Fe:solution.exe
.\solution.exe
```

---

## Progress

![Easy](https://img.shields.io/badge/Easy-5-green)
![Medium](https://img.shields.io/badge/Medium-8-orange)
![Hard](https://img.shields.io/badge/Hard-1-red)

## Topics

| Topic | Easy | Medium | Hard | Total |
|---|---|---|---|---|
| [Arrays](topics/arrays/) | 2 | 1 | 0 | 3 |
| [Sliding Window](topics/sliding-window/) | 0 | 1 | 1 | 2 |
| [Strings](topics/strings/) | 1 | 0 | 0 | 1 |
| [Trees](topics/trees/) | 1 | 2 | 0 | 3 |
| [Dynamic Programming](topics/dynamic-programming/) | 1 | 3 | 0 | 4 |
| [Graphs](topics/graphs/) | 0 | 3 | 0 | 3 |
| [Two Pointers](topics/two-pointers/) | 0 | 0 | 0 | 0 |
| [Binary Search](topics/binary-search/) | 0 | 0 | 0 | 0 |
| [Linked List](topics/linked-list/) | 0 | 0 | 0 | 0 |
| [Heaps / Priority Queue](topics/heaps-priority-queue/) | 0 | 0 | 0 | 0 |
| [Stacks & Queues](topics/stacks-queues/) | 0 | 0 | 0 | 0 |
| [Math & Bit Manipulation](topics/math-bit-manipulation/) | 0 | 0 | 0 | 0 |
| [Greedy](topics/greedy/) | 0 | 0 | 0 | 0 |
| [Backtracking](topics/backtracking/) | 0 | 0 | 0 | 0 |

## All solutions

| # | Problem | Difficulty | Topic | Python | C++ | Notes |
|---|---|---|---|---|---|---|
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Arrays | ✓ | ✓ | [notes](topics/arrays/easy/0001-two-sum/notes.md) |
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Sliding Window | ✓ | ✓ | [notes](topics/sliding-window/medium/0003-longest-substring-without-repeating/notes.md) |
| 0013 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Easy | Strings | ✓ | ✓ | [notes](topics/strings/easy/0013-roman-to-integer/notes.md) |
| 0070 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Easy | Dynamic Programming | ✓ | ✓ | [notes](topics/dynamic-programming/easy/0070-climbing-stairs/notes.md) |
| 0076 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | Hard | Sliding Window | ✓ | ✓ | [notes](topics/sliding-window/hard/0076-minimum-window-substring/notes.md) |
| 0098 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) | Medium | Trees | ✓ | ✓ | [notes](topics/trees/medium/0098-validate-binary-search-tree/notes.md) |
| 0104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | Trees | ✓ | ✓ | [notes](topics/trees/easy/0104-maximum-depth-of-binary-tree/notes.md) |
| 0121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | Arrays | ✓ | ✓ | [notes](topics/arrays/easy/0121-best-time-to-buy-and-sell-stock/notes.md) |
| 0133 | [Clone Graph](https://leetcode.com/problems/clone-graph/) | Medium | Graphs | ✓ | ✓ | [notes](topics/graphs/medium/0133-clone-graph/notes.md) |
| 0198 | [House Robber](https://leetcode.com/problems/house-robber/) | Medium | Dynamic Programming | ✓ | ✓ | [notes](topics/dynamic-programming/medium/0198-house-robber/notes.md) |
| 0200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/) | Medium | Graphs | ✓ | ✓ | [notes](topics/graphs/medium/0200-number-of-islands/notes.md) |
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | Medium | Graphs | ✓ | ✓ | [notes](topics/graphs/medium/0207-course-schedule/notes.md) |
| 0236 | [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | Medium | Trees | ✓ | ✓ | [notes](topics/trees/medium/0236-lowest-common-ancestor/notes.md) |
| 0238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | Arrays | ✓ | ✓ | [notes](topics/arrays/medium/0238-product-of-array-except-self/notes.md) |
| 0322 | [Coin Change](https://leetcode.com/problems/coin-change/) | Medium | Dynamic Programming | ✓ | ✓ | [notes](topics/dynamic-programming/medium/0322-coin-change/notes.md) |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | Medium | Dynamic Programming | ✓ | ✓ | [notes](topics/dynamic-programming/medium/1143-longest-common-subsequence/notes.md) |
