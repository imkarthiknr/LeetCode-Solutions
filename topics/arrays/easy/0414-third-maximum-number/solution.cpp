// 0414 · Third Maximum Number
// Approach: Ordered set capped at 3 | Time: O(n) | Space: O(1)

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top;
        for (int num : nums) {
            top.insert(num);
            if (top.size() > 3) top.erase(top.begin());
        }
        return top.size() == 3 ? *top.begin() : *top.rbegin();
    }
};
