// 0169 · Majority Element
// Approach: Boyer-Moore voting | Time: O(n) | Space: O(1)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for (int num : nums) {
            if (count == 0) candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};


// Approach 2: Hash map count | Time: O(n) | Space: O(n)
class SolutionHashMap {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int num : nums)
            if (++counts[num] > (int)nums.size() / 2) return num;
        return -1;
    }
};
