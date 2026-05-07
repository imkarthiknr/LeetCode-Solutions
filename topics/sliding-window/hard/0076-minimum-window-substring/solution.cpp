// 0076 · Minimum Window Substring
// Approach: Sliding window + frequency counts | Time: O(|s|+|t|) | Space: O(|s|+|t|)

#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;

        int required = need.size(), formed = 0;
        int left = 0, bestLen = INT_MAX, bestLeft = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            char ch = s[right];
            window[ch]++;
            if (need.count(ch) && window[ch] == need[ch])
                formed++;

            while (formed == required) {
                if (right - left + 1 < bestLen) {
                    bestLen = right - left + 1;
                    bestLeft = left;
                }
                char lch = s[left++];
                window[lch]--;
                if (need.count(lch) && window[lch] < need[lch])
                    formed--;
            }
        }

        return bestLen == INT_MAX ? "" : s.substr(bestLeft, bestLen);
    }
};
