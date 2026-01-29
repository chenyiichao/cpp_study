#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(nums[i] > min && nums[i] < max) {
                count ++;
            }
        }
        return count;
        
    }
};

/**
 * 
 * 示例 1：

输入：nums = [11,7,2,15]
输出：2
解释：元素 7 ：严格较小元素是元素 2 ，严格较大元素是元素 11 。
元素 11 ：严格较小元素是元素 7 ，严格较大元素是元素 15 。
总计有 2 个元素都满足在 nums 中同时存在一个严格较小元素和一个严格较大元素。
示例 2：

输入：nums = [-3,3,3,90]
输出：2
解释：元素 3 ：严格较小元素是元素 -3 ，严格较大元素是元素 90 。
由于有两个元素的值为 3 ，总计有 2 个元素都满足在 nums 中同时存在一个严格较小元素和一个严格较大元素。
 */

int main() {
    Solution s;
    // vector<int> input = {11,7,2,15};
    vector<int> input = {-3,3,3,90};
    int output = s.countElements(input);
    cout << output << endl;
}