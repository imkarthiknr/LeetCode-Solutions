// 1752 · Check if Array Is Sorted and Rotated
// Approach: Count circular descents | Time: O(n) | Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), drops = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n] && ++drops > 1)
                return false;
        }
        return true;
    }
};
