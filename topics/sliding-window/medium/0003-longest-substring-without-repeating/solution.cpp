// 0003 · Longest Substring Without Repeating Characters
// Approach: Sliding window + hash map | Time: O(n) | Space: O(n)

#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0, best = 0;
        for (int right = 0; right < (int)s.size(); right++) {
            char ch = s[right];
            if (lastSeen.count(ch) && lastSeen[ch] >= left)
                left = lastSeen[ch] + 1;
            lastSeen[ch] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};
