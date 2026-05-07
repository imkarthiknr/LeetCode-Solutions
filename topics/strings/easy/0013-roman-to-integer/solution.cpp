// 0013 · Roman to Integer
// Approach: Left-to-right with lookahead | Time: O(n) | Space: O(1)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            if (i + 1 < (int)s.size() && val[s[i]] < val[s[i + 1]])
                result -= val[s[i]];
            else
                result += val[s[i]];
        }
        return result;
    }
};
