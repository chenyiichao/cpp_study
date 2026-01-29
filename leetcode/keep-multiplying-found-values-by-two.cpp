#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        for (int num: nums) {
            if (original == num) {
                original *= 2;
            }
        }
        return original;
    }
};

/**
 * 示例 1：

输入：nums = [5,3,6,1,12], original = 3
输出：24
解释： 
- 3 能在 nums 中找到。3 * 2 = 6 。
- 6 能在 nums 中找到。6 * 2 = 12 。
- 12 能在 nums 中找到。12 * 2 = 24 。
- 24 不能在 nums 中找到。因此，返回 24 。
示例 2：

输入：nums = [2,7,9], original = 4
输出：4
解释：
- 4 不能在 nums 中找到。因此，返回 4 。
 */

int main() {

    Solution s;
    vector<int> input = {2,7,9};
    int original = 4;
    int output = s.findFinalValue(input, original);
    cout << output << endl;
}