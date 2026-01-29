#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;


class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums(4);
        int i = 0;
        while(num) {
            nums[i] = num%10;
            num /= 10;
            i++;
        }

        
        sort(nums.begin(), nums.end());
        return nums[0]*10+nums[1]*10+nums[2]+nums[3];
    }
};

/**
 * 示例 1：
输入：num = 2932
输出：52
解释：可行的 [new1, new2] 数对为 [29, 23] ，[223, 9] 等等。
最小和为数对 [29, 23] 的和：29 + 23 = 52 。
示例 2：

输入：num = 4009
输出：13
解释：可行的 [new1, new2] 数对为 [0, 49] ，[490, 0] 等等。
最小和为数对 [4, 9] 的和：4 + 9 = 13 。
 */
int main() {
    Solution s;
    int input = s.minimumSum(4009);
    cout << input << endl;
}