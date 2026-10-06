// 0989 · Add to Array-Form of Integer
// Approach: Digit-by-digit addition from the right | Time: O(max(n, log k)) | Space: O(1) extra

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int i = (int)num.size() - 1;
        while (i >= 0 || k > 0) {
            if (i >= 0) k += num[i--];
            result.push_back(k % 10);
            k /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
